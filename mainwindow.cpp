#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bookmage.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->PontosTotal->setDisplayIntegerBase(12);
//    connect(ui->BolaFogo,SIGNAL(clicked()),&bookmage(),SLOT());
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::setdaita()
{
    player = new Player;
    _nome = ui->nomeEdit->text();
    _raca = ui->racaBox->currentText();
    _proficao1 = ui->proficaoBox->currentText();
    _proficao2 = ui->proficaoDoisEdit_6->text();
    _deus = ui->radioButton->isChecked();
    _estagio = 1;

//    _ataque = ;
//    _defesa;
    _intelecto = ui->intelectoBox->value();
    _fisico = ui->fisicoBox->value();
    _aura = ui->fisicoBox->value();
    _carisma =ui->fisicoBox->value();
    _forca = ui->fisicoBox->value();
    _agilidade = ui->fisicoBox->value();
    _percepcao = ui->fisicoBox->value();

    player->setAgilidade(_agilidade);
    player->setDeus(_deus);
    player->setNome(_nome);
    player->setRaca(_raca);
}


void MainWindow::on_pushButton_clicked()
{
    setdaita();
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

void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    int temp = arg1;
    qDebug() << temp;
}


void MainWindow::on_intelectoBox_textChanged(const QString &arg1)
{
    int value = 1;
    ui->intelectoBox->setValue(ui->PontosTotal->value() + value);
}


void MainWindow::on_proficaoBox_currentTextChanged(const QString &arg1)
{
    player = new Player();
    if(ui->proficaoBox->currentText()=="Bardos"){
        QPixmap label(":/images/armas4.jpeg");
        ui->proficao->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        _life = 16;
        _mana = 8;
        player->setLife(_life);
        player->setMana(_mana);
    }
    else if(ui->proficaoBox->currentText()=="Guerreiros"){
        QPixmap label(":/images/armas5.jpeg");
        ui->proficao->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        _life = 25;
        player->setLife(_life);
        player->setMana(_mana);
    }
    else if(ui->proficaoBox->currentText()=="Ladinos"){
        QPixmap label(":/images/armas1.jpeg");
        ui->proficao->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        _life = 16;
        player->setLife(_life);
        player->setMana(_mana);
    }
    else if(ui->proficaoBox->currentText()=="Magos"){
        QPixmap label(":/images/armas6.jpeg");
        ui->proficao->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        _life = 12;
        _mana = 16;
        player->setLife(_life);
        player->setMana(_mana);
    }
    else if(ui->proficaoBox->currentText()=="Rastreadores"){
        QPixmap label(":/images/armas3.jpeg");
        ui->proficao->setPixmap(label.scaled(80,80,Qt::KeepAspectRatioByExpanding));
        _life = 20;
        _mana = 8;
        player->setLife(_life);
        player->setMana(_mana);
    }
    else if(ui->proficaoBox->currentText()=="Sacerdotes"){
        QPixmap label(":/images/armas2.jpeg");
        ui->proficao->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        _life = 20;
        _mana = 12;
        player->setLife(_life);
        player->setMana(_mana);
    }

}

