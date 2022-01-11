#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "model.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);




    QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    QNetworkRequest req = QNetworkRequest(QUrl("http://jsonplaceholder.typicode.com/users"));
    manager->get(req);

    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(dataLoaded(QNetworkReply*)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dataLoaded(QNetworkReply* reply){
    QByteArray buffer = reply->readAll();

    QJsonDocument jsonDoc(QJsonDocument::fromJson(buffer));
    QJsonArray jsonReply = jsonDoc.array();
    Model *user = new Model(jsonReply[0].toObject());

    qDebug() << buffer;
}
