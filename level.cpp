#include "level.h"
#include "ui_level.h"

Level::Level(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Level)
{
    ui->setupUi(this);
//    ui->label->setPixmap(label.scaled(350,350,Qt::KeepAspectRatioByExpanding));
    connect(ui->ok,SIGNAL(clicked()),this,SLOT(parteQuatro()));

//    QState s1;
//    QState s2;
//    QState s3;
}

Level::~Level()
{
    delete ui;
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
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("No sul de Calco existe uma cidade chamada Abrasil, a cidade dos pequeninos de Calco, \n fundada po eles. Abrasil é conhecida por suas festas e pelos seus excelentes vinhos.");
}

void Level::parteDois()
{

}

void Level::parteTres()
{
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Um grupo de ladroens esta ataquando");
}

void Level::parteQuatro()
{
    parteTres();
    inimigo = new Inimigo;
    player = new Player;

    int Ilife = inimigo->life;
    int Iataque = inimigo->ataque;
    int Idefes = inimigo->defesa;

    int Plife = player->life;
    int Pataque = player->ataque;
    int Pdefes = player->defesa;

    if(ui->Button1->isChecked()){
        Idefes -= (Pataque/Iataque);
        Ilife -= ((Pataque/Iataque)/2);
        QString life = (QChar)Iataque;
        QString defesa = (QChar)Idefes;
        ui->label2->setText(life);
        ui->label3->setText(defesa);
    }

    BbookMmage();
}

void Level::on_direita_clicked()
{
}

void Level::on_esquerda_clicked()
{
}

void Level::addState(QState *state)
{
//    m_statemachine = new QStateMachine();
//    state->assignProperty(ui->)

    m_statemachine;

}
