#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bookmage.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString name = ui->racaBox->currentText();
    if(name == elfo){
        QPixmap label(":/images/Fingolfin.jpg");
        ui->face->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this->close();
    level = new Level(this);
//    level->setModal(true);
    level->show();
//    exit(0);
}

