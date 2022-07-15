#include "level.h"
#include "ui_level.h"

Level::Level(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Level)
{
    ui->setupUi(this);
    QPixmap label(":/images/monstroletra.png");
    ui->label->setPixmap(label.scaled(350,350,Qt::KeepAspectRatioByExpanding));
}

Level::~Level()
{
    delete ui;
}

void Level::on_pushButton_clicked()
{
    if(ui->radioButton_2){
        book = new BookMage(this);
        book->show();
    }
}

