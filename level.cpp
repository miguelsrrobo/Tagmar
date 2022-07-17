#include "level.h"
#include "ui_level.h"

Level::Level(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Level)
{
    ui->setupUi(this);
//    ui->label->setPixmap(label.scaled(350,350,Qt::KeepAspectRatioByExpanding));
    connect(ui->ok,SIGNAL(clicked()),this,SLOT(parteQuatro()));


    for (size_t i = 0; i < 10; ++i)
    {
        QState *state = new QState();
        state->setObjectName("State" + QString::number(i));
        addState(state);
    }

    ui->vida->setValue(100);
    ui->mana->setValue(100);
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
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Um grupo de ladroens esta ataquando");
}

void Level::parteTres()
{
    QPixmap label(":/images/bandidos.png");
    ui->label1->setPixmap(label.scaled(200,200,Qt::KeepAspectRatioByExpanding));
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
    ui->testo1->setText("Ataque comum");
    ui->testo2->setText("livro de Magias");
    ui->testo3->setText("fulga");
    if(ui->Button1->isChecked()){
        Idefes -= (Pataque/Iataque);
        Ilife -= ((Pataque/Iataque)/2);
        QString life = (QChar)Iataque;
        QString defesa = (QChar)Idefes;
        ui->label2->setText(life);
        ui->label3->setText(defesa);
    }
    if(Ilife == 0){
//        QMessageBox
    }
    BbookMmage();
}

void Level::on_direita_clicked()
{
    parteUm();
}

void Level::on_esquerda_clicked()
{
}

void Level::addState(QState *state)
{
    state->assignProperty(ui->testo2,"text",state->objectName());
    int i = m_states.length();
    if(i < 0)
    {
        QState *p = qobject_cast<QState*>(m_states.at(i - 1));
        p->addTransition(ui->direita,&QPushButton::clicked, state);
    }
    connect(state, &QState::entered, this, &Level::parteUm);
    connect(state, &QState::exited, this, &Level::parteDois);
    m_states.append(state);
    m_statemachine.addState(state);
}
