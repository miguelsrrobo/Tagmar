#include "bookmage.h"
#include "ui_bookmage.h"
#include <QMessageBox>
#include <cstdlib>

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
int BookMage::mageName() {
    if(ui->BolaFogo->isChecked())
    {
        return m_mageId = 01;
    }
    else if(ui->Desintegracao->isChecked())
    {
        return m_mageId = 02;
    }
    else if(ui->Invisibilidade->isChecked())
    {
        return m_mageId = 03;
    }
    else if(ui->RaioEletrico->isChecked())
    {
        return m_mageId = 04;
    }
    else if(ui->Telecinese->isChecked())
    {
        return m_mageId = 05;
    }
}


void BookMage::on_pushButton_clicked()
{
    this->close();
    ui->radioButton_4->clicked(true);
}

