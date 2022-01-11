#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QBoxLayout>
#include <QScrollArea>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);





    centralWidget()->setLayout(new QVBoxLayout);
    QScrollArea *area = new QScrollArea(this);
    area->setWidgetResizable(true);
    area->setWidget(new QWidget);
    QGridLayout *grid = new QGridLayout;
    area->widget()->setLayout(grid);
    centralWidget()->layout()->addWidget(area);

    for(int row = 0; row < 2; row++)
    {
        for(int column = 0; column < 4; column++)
        {
            QFrame *container = new QFrame;
            container->setStyleSheet("QFrame{border: 1px solid black;}");
            container->setLayout(new QVBoxLayout);
            container->layout()->addWidget(new QLabel("Hi man"));

            grid->addWidget(container, row, column);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

