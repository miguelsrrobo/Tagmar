#include "bookmage.h"
#include "ui_bookmage.h"
#include <QMessageBox>
#include <cstdlib>
#include <QDebug>

BookMage::BookMage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BookMage)
{
    ui->setupUi(this);
}

BookMage::~BookMage()
{
    delete ui;
}

void BookMage::on_pushButton_clicked()
{
    this->close();
//    ui->radioButton_4->clicked(true);
}

