#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bookmage.h"
#include <QDebug>
#include "level.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->PontosTotal->setDisplayIntegerBase(12);
//    connect(ui->BolaFogo,SIGNAL(clicked()),&bookmage(),SLOT());
//    ui->PontosTotal->setValue(15);
    habilidade();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::GetRaca()
{
    return ui->racaBox->currentText();
}

QString MainWindow::GetClasse()
{
    return ui->proficaoBox->currentText();
}

QString MainWindow::GetNome()
{
    return ui->nomeEdit->text();

}


void MainWindow::on_pushButton_clicked()
{
//    setdaita();
    this->close();
    level = new Level(this);
//    level->setModal(true);
//    level->SetMainwindow(this);
    level->show();
//    exit(0);
}


void MainWindow::on_racaBox_currentTextChanged(const QString &arg1)
{
    level = new Level;
    if(ui->racaBox->currentText()=="Elfo"){
        QPixmap label(":/images/raça02.png");
        ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
//        level->setRaca("Elfo");
        _aura = 2;
        _intelecto = 2;
    }
    else if(ui->racaBox->currentText()=="Humano"){
        QPixmap label(":/images/raça01.png");
        ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
//        level->setRaca("Humano");
        _intelecto = 1;
        _forca = 1;
        _carisma = 1;
        _fisico = 1;
    }
    else if(ui->racaBox->currentText()=="Anões"){
        QPixmap label(":/images/raça03.png");
        ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
//        level->setRaca("Anões");
        _fisico = 2;
        _forca = 2;
    }
    else if(ui->racaBox->currentText()=="Meio-Elfo"){
        QPixmap label(":/images/raça06.png");
        ui->face->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
//        level->setRaca("Meio-Elfo");
        _carisma = 2;
        _aura = 1;
        _intelecto = 1;
    }
    else if(ui->racaBox->currentText()=="Elfo Florestal"){
        QPixmap label(":/images/raça04.png");
        ui->face->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
//        level->setRaca("Elfo Florestal");
        _aura = 2;
        _percepcao = 2;
    }
    else if(ui->racaBox->currentText()=="Pequeninos"){
        QPixmap label(":/images/raça05.png");
        ui->face->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding)); }
//        level->setRaca("Pequeninos");
        _agilidade = 2;
        _carisma = 2;
}

void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    int temp = arg1;
    qDebug() << temp;
}


void MainWindow::on_proficaoBox_currentTextChanged(const QString &arg1)
{
    size_t Aura(0);
    size_t Agilidade(0);
    size_t Carisma(0);
    size_t Fisico(0);
    size_t Forca(0);
    size_t Intelecto(0);
    size_t Percepcao(0);

    if(ui->proficaoBox->currentText()==" "){

        ui->intelectoLabel->setText(QString::number(0));
        ui->auraLabel->setText(QString::number(0));
        ui->carismaLabel->setText(QString::number(0));
        ui->forcaLabel->setText(QString::number(0));
        ui->fisicoLabel->setText(QString::number(0));
        ui->agilidadeLabel->setText(QString::number(0));
        ui->percepcaoLabel->setText(QString::number(0));

        QMessageBox::about(this,"Bardo","O contador de histórias, sua voz mágica ecoa na alma de todos ao redor, ele usa um misto de poderes mágicos e marciais, infelizmente ele não foca em nenhum");
    }


    else if(ui->proficaoBox->currentText()=="Bardos"){
        QPixmap label(":/images/armas4.jpeg");
        ui->proficao->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        _life = 16;
        _mana = 8;

        Aura = _aura+2;
        Agilidade = _agilidade+3;
        Carisma = _carisma+6;
        Fisico = _fisico+1;
        Forca = _forca+0;
        Intelecto = _intelecto+2;
        Percepcao = _percepcao+1;

        _aura = Aura;
        _agilidade = Agilidade;
        _carisma = Carisma;
        _fisico = Fisico;
        _forca = Forca;
        _intelecto = Intelecto;
        _percepcao = Percepcao;

        ui->intelectoLabel->setText(QString::number(Intelecto));
        ui->auraLabel->setText(QString::number(Aura));
        ui->carismaLabel->setText(QString::number(Carisma));
        ui->forcaLabel->setText(QString::number(Forca));
        ui->fisicoLabel->setText(QString::number(Fisico));
        ui->agilidadeLabel->setText(QString::number(Agilidade));
        ui->percepcaoLabel->setText(QString::number(Percepcao));

        QMessageBox::about(this,"Bardo","O contador de histórias, sua voz mágica ecoa na alma de todos ao redor, ele usa um misto de poderes mágicos e marciais, infelizmente ele não foca em nenhum");
    }
    else if(ui->proficaoBox->currentText()=="Guerreiros"){
        QPixmap label(":/images/armas5.jpeg");
        ui->proficao->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        _life = 20;
        _mana = 0;

        Aura = _aura+0;
        Agilidade = _agilidade+2;
        Carisma = _carisma+0;
        Fisico = _fisico+6;
        Forca = _forca+7;
        Intelecto = _intelecto+0;
        Percepcao = _percepcao+0;

        _aura = Aura;
        _agilidade = Agilidade;
        _carisma = Carisma;
        _fisico = Fisico;
        _forca = Forca;
        _intelecto = Intelecto;
        _percepcao = Percepcao;

        ui->intelectoLabel->setText(QString::number(_intelecto));
        ui->auraLabel->setText(QString::number(_aura));
        ui->carismaLabel->setText(QString::number(_carisma));
        ui->forcaLabel->setText(QString::number(_forca));
        ui->fisicoLabel->setText(QString::number(_fisico));
        ui->agilidadeLabel->setText(QString::number(_agilidade));
        ui->percepcaoLabel->setText(QString::number(_percepcao));

        QMessageBox::about(this,"Guerreiros","Capaz de usar todas as armas e armaduras, o indomável guerreiro é dificilmente derrubado, você começa com uma espada");
    }
    else if(ui->proficaoBox->currentText()=="Ladinos"){
        QPixmap label(":/images/armas1.jpeg");
        ui->proficao->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        _life = 16;
        _mana = 0;

        Aura = _aura+0;
        Agilidade = _agilidade+5;
        Carisma = _carisma+3;
        Fisico = _fisico+1;
        Forca = _forca+1;
        Intelecto = _intelecto+2;
        Percepcao = _percepcao+3;

        _aura = Aura;
        _agilidade = Agilidade;
        _carisma = Carisma;
        _fisico = Fisico;
        _forca = Forca;
        _intelecto = Intelecto;
        _percepcao = Percepcao;

        ui->intelectoLabel->setText(QString::number(_intelecto));
        ui->auraLabel->setText(QString::number(_aura));
        ui->carismaLabel->setText(QString::number(_carisma));
        ui->forcaLabel->setText(QString::number(_forca));
        ui->fisicoLabel->setText(QString::number(_fisico));
        ui->agilidadeLabel->setText(QString::number(_agilidade));
        ui->percepcaoLabel->setText(QString::number(_percepcao));

        QMessageBox::about(this,"Ladinos","Especialista em muitas áreas, versátil e perspicaz, só pode usar de armamento leve, mas de todas as armas que requeiram destreza");

    }
    else if(ui->proficaoBox->currentText()=="Magos"){
        QPixmap label(":/images/armas6.jpeg");
        ui->proficao->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        _life = 12;
        _mana = 16;

        Aura = _aura+6;
        Agilidade = _agilidade+1;
        Carisma = _carisma+1;
        Fisico = _fisico+0;
        Forca = _forca+0;
        Intelecto = _intelecto+5;
        Percepcao = _percepcao+2;

        _aura = Aura;
        _agilidade = Agilidade;
        _carisma = Carisma;
        _fisico = Fisico;
        _forca = Forca;
        _intelecto = Intelecto;
        _percepcao = Percepcao;

        ui->intelectoLabel->setText(QString::number(_intelecto));
        ui->auraLabel->setText(QString::number(_aura));
        ui->carismaLabel->setText(QString::number(_carisma));
        ui->forcaLabel->setText(QString::number(_forca));
        ui->fisicoLabel->setText(QString::number(_fisico));
        ui->agilidadeLabel->setText(QString::number(_agilidade));
        ui->percepcaoLabel->setText(QString::number(_percepcao));

        QMessageBox::about(this,"Magos","O escolar focado em descobrir os segredos místicos, cauteloso com seu cajado, ele não precisa de armaduras ou armas");
    }
    else if(ui->proficaoBox->currentText()=="Rastreadores"){
        QPixmap label(":/images/armas3.jpeg");
        ui->proficao->setPixmap(label.scaled(80,80,Qt::KeepAspectRatioByExpanding));
        _life = 20;
        _mana = 8;

        Aura = _aura+1;
        Agilidade = _agilidade+3;
        Carisma = _carisma+0;
        Fisico = _fisico+3;
        Forca = _forca+2;
        Intelecto = _intelecto+0;
        Percepcao = _percepcao+6;

        _aura = Aura;
        _agilidade = Agilidade;
        _carisma = Carisma;
        _fisico = Fisico;
        _forca = Forca;
        _intelecto = Intelecto;
        _percepcao = Percepcao;

        ui->intelectoLabel->setText(QString::number(_intelecto));
        ui->auraLabel->setText(QString::number(_aura));
        ui->carismaLabel->setText(QString::number(_carisma));
        ui->forcaLabel->setText(QString::number(_forca));
        ui->fisicoLabel->setText(QString::number(_fisico));
        ui->agilidadeLabel->setText(QString::number(_agilidade));
        ui->percepcaoLabel->setText(QString::number(_percepcao));

        QMessageBox::about(this,"Rastreadores","Sobrevivendo fora da civilização, ele aprendeu a usar a magia natural, enquanto se defendia dos perigos do mundo desconhecido, você pode tanto usar magias como espadas e armaduras médias");
    }
    else if(ui->proficaoBox->currentText()=="Sacerdotes"){
        QPixmap label(":/images/armas2.jpeg");
        ui->proficao->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        _life = 20;
        _mana = 12;
        ui->simDeusButton->setChecked(true);

        Aura = _aura+4;
        Agilidade = _agilidade+0;
        Carisma = _carisma+3;
        Fisico = _fisico+2;
        Forca = _forca+3;
        Intelecto = _intelecto+2;
        Percepcao = _percepcao+1;

        _aura = Aura;
        _agilidade = Agilidade;
        _carisma = Carisma;
        _fisico = Fisico;
        _forca = Forca;
        _intelecto = Intelecto;
        _percepcao = Percepcao;

        ui->intelectoLabel->setText(QString::number(_intelecto));
        ui->auraLabel->setText(QString::number(_aura));
        ui->carismaLabel->setText(QString::number(_carisma));
        ui->forcaLabel->setText(QString::number(_forca));
        ui->fisicoLabel->setText(QString::number(_fisico));
        ui->agilidadeLabel->setText(QString::number(_agilidade));
        ui->percepcaoLabel->setText(QString::number(_percepcao));

        QMessageBox::about(this,"Sacerdotes","Um campeão divino, e portador da crença, ao mesmo tempo que canaliza milagres mágicos, pode usar armas de impacto e armadura média");
    }
}

void MainWindow::on_simDeusButton_clicked()
{
    level = new Level;
//    level->setDeus(true);
}

void MainWindow::habilidade()
{
    if(ui->Acrobacia->isChecked())
    {
        ui->acrobacia->setText(QString::number(15));
        //        ui->persuasao->setText(QString::number(10));
        this->_agilidade += 15;
    }
    else if(ui->Linguas->isChecked())
    {
        ui->linguas->setText(QString::number(15));
        /*ui->medicina->setText(QString::number(10));
        ui->misticismo->setText(QString::number(10));*/
        this->_intelecto += 15;
    }

    else if(ui->Medicina->isChecked())
    {
//        ui->linguas->setText(QString::number(10));
        ui->medicina->setText(QString::number(15));
//        ui->misticismo->setText(QString::number(10));
        this->_intelecto+= 15;
    }
    else if(ui->Persuasao->isChecked())
    {
        ui->persuasao->setText(QString::number(15));
        this->_carisma += 15;
    }

    else if(ui->Misticismo->isChecked())
    {
//        ui->linguas->setText(QString::number(10));
//        ui->medicina->setText(QString::number(10));
        ui->misticismo->setText(QString::number(15));
        this->_intelecto += 15;
    }
    else if(ui->Furtividade->isChecked())
    {
        ui->furtividade->setText(QString::number(15));
//        ui->desfechadura->setText(QString::number(10));
//        ui->furtividade->setText(QString::number(10));
        this-> _agilidade +=15;
    }

    else if(ui->DesFechadura->isChecked())
    {
//        ui->furtividade->setText(QString::number(10));
        ui->desfechadura->setText(QString::number(15));
//        ui->furtividade->setText(QString::number(10));
        this->_percepcao += 15;
    }
    else if(ui->SeguirTrilhas->isChecked())
    {
        ui->seguirtrilhas->setText(QString::number(15));
        this->_percepcao += 15;
    }
    else if(ui->FurObjetos->isChecked())
    {
//        ui->furtividade->setText(QString::number(10));
//        ui->desfechadura->setText(QString::number(10));
        ui->furobjetos->setText(QString::number(15));
        this->_percepcao += 15;
    }

}


QString MainWindow::GetProficao2()
{
//    return _proficao2;
}

bool MainWindow::GetDeus()
{
    return ui->simDeusButton->isChecked();
}

size_t MainWindow::GetEstagio()
{
    return _estagio;
}

size_t MainWindow::GetLife()
{
    return _life;
}

size_t MainWindow::GetAtaque()
{
    return _ataque;
}

size_t MainWindow::GetDefesa()
{
    return _defesa;
}

size_t MainWindow::GetIntelecto()
{
    return _intelecto;
}

size_t MainWindow::GetFisico()
{
    return this->_fisico;
}

size_t MainWindow::GetAura()
{
    return this->_aura;
}

size_t MainWindow::GetCarisma()
{
    return _carisma;
}

size_t MainWindow::GetForca()
{
    return _forca;
}

size_t MainWindow::GetAgilidade()
{
    return _agilidade;
}

size_t MainWindow::GetPercepcao()
{
    return _percepcao;
}

size_t MainWindow::GetMana()
{
    return _mana;
}
