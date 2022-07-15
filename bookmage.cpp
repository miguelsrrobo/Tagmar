#include "bookmage.h"
#include "ui_bookmage.h"

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

}

