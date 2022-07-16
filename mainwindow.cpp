#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bookmage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString name = ui->racaBox->currentText();
    if(name == "Elfos Dourado"){
        QPixmap label(":/images/Fingolfin.jpg");
        ui->face->setPixmap(label.scaled(350,350,Qt::KeepAspectRatioByExpanding));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    level = new Level(this);

    level->show();
//    exit(0);
}

