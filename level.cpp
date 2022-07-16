#include "level.h"
#include "ui_level.h"

Level::Level(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Level)
{
    ui->setupUi(this);
    QPixmap label(":/images/monstroletra.png");
//    ui->label->setPixmap(label.scaled(350,350,Qt::KeepAspectRatioByExpanding));

}

Level::~Level()
{
    delete ui;
}

void Level::on_pushButton_clicked()
{
    BbookMmage();
    parteUm();
}

void Level::BbookMmage()
{
    if(ui->Button2->isChecked()){
        book = new BookMage(this);
        book->show();
    }
}

void Level::parteUm()
{
    ui->label1->setText("No sul de Calco existe uma cidade chamada Abrasil, a cidade dos pequeninos de Calco, \n fundada po eles. Abrasil é conhecida por suas festas e pelos seus excelentes vinhos.");
}

void Level::parteDois()
{

}

void Level::parteTres()
{

}

void Level::parteQuatro()
{

}
