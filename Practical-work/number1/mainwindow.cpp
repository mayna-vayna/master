#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPushButton *btn = new QPushButton("click me",this);



    QObject::connect(btn,SIGNAL(clicked()),this,SLOT(ToClickButton()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::ToClickButton(){

    btn->setText("MyButton");
}
