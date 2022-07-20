#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bookmage.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    connect(ui->BolaFogo,SIGNAL(clicked()),&bookmage(),SLOT());
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


void MainWindow::on_racaBox_currentTextChanged(const QString &arg1)
{
    if(ui->racaBox->currentText()=="Elfo"){
        QPixmap label(":/images/raça02.png");
        ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    }
    else if(ui->racaBox->currentText()=="Humano"){
        QPixmap label(":/images/raça01.png");
        ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    }
    else if(ui->racaBox->currentText()=="Anões"){
        QPixmap label(":/images/raça03.png");
        ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    }
    else if(ui->racaBox->currentText()=="Meio-Elfo"){
            QPixmap label(":/images/raça06.png");
            ui->face->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
    }
    else if(ui->racaBox->currentText()=="Elfo Florestal"){
            QPixmap label(":/images/raça04.png");
            ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    }
    else if(ui->racaBox->currentText()=="Pequeninos"){
            QPixmap label(":/images/raça05.png");
            ui->face->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding)); }
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    if(ui->racaBox->currentText()=="Elfo"){
        QPixmap label(":/images/raça02.png");
        ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    }
    else if(ui->racaBox->currentText()=="Humano"){
        QPixmap label(":/images/raça01.png");
        ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    }
    else if(ui->racaBox->currentText()=="Anões"){
        QPixmap label(":/images/raça03.png");
        ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    }
    else if(ui->racaBox->currentText()=="Meio-Elfo"){
            QPixmap label(":/images/raça06.png");
            ui->face->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
    }
    else if(ui->racaBox->currentText()=="Elfo Florestal"){
            QPixmap label(":/images/raça04.png");
            ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    }
    else if(ui->racaBox->currentText()=="Pequeninos"){
            QPixmap label(":/images/raça05.png");
            ui->face->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding)); }
}

