#include "level.h"
#include "ui_level.h"
#include <QMessageBox>
#include <iostream>
#include <cstdlib>

Level::Level(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Level)
{
    ui->setupUi(this);
    connect(ui->ok,SIGNAL(clicked()),this,SLOT(BbookMmage()));
    parteZero();
    ui->vida->setValue(125);
    ui->mana->setValue(100);
    ui->Button1->setChecked(true);
    ui->vida->setMaximum(25);
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


void Level::parteZero()
{
    QPixmap label(":/images/transicao.png");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Sejam  Bem-vindos ao incrível mundo de Tagmar! Embarque numa aventura cheia de desafios, \n fama, fortuna e glória esperam por vocês.");

}

void Level::parteUm()
{
    QPixmap label(":/images/mapacor.png");
    ui->label1->setPixmap(label.scaled(300,300,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("No sul de Calco existe uma cidade chamada Abrasil, a cidade dos pequeninos de Calco, \n fundada po eles. Abrasil é conhecida por suas festas e pelos seus excelentes vinhos.");
    ui->label3->setText("Dentre as tabernas da cidade uma se destaca pela boa comida, vinho farto e por seu proprietário.\n O lugar se chama 'O Barril de Cedro'. Seu dono é Arnolfo Mão Forte, um antigo capitão da Guarda Real \n que perdeu uma perna heroicamente em combate salvando, assim, o próprio Príncipe");

}

void Level::parteDois()
{
    if(true)
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("É amigo de Arnolfo, que goza de grande fama e amizade nesta raça por seu heroísmo nas guerras \n que expulsaram os orcos de Filanti para as cordilheiras de Keiss");
    }
    else if(false)
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("É primo do noivo, Tarislar, um meio-elfo de boa família, servindo como guarda junto do Barão Rimbard.");
    }
    else if(false)
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("É amigo da noiva. Uma pessoa bonita e gentil que sempre o recebe bem.");
    }
    else if(false)
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("O príncipe de Calco pediu pessoalmente que as autoridades de Saravossa enviassem um representante para escoltar a jovem como uma forma \n de agradecimento a Arnolfo e você foi o escolhido.");
    }
    else if(false)
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("Você é um amigo de infância dos cônjujes");
    }
}

void Level::parteTres()
{
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Você foi chamado como escolta de honra que, por tradição, leva a noiva até o casamento ganhando ricos presentes durante a cerimônia.");
    ui->label3->setText("O casamento se dará no Forte Águas Profundas, pertencente ao Barão Rimbard, onde vive o noivo; \n nas montanhas perto de Tória, uma cidade bem ao sul de Calco,\n do outro lado das montanhas");

}


void Level::parteQuatro()
{
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Você se encontra ao anoitecer na taberna. Lá vem Arnolfo Mão Forte, uma figura impressionante,\n com quase dois metros de altura e um corpo robusto, porém contente e, a esta hora, um pouco bêbado.");
    ui->label3->setText("É uma pequena festa, pois a escolta de honra (você!) sai amanhã com a noiva. \n Arnolfo parte cinco dias depois para o casamento.");
}

void Level::parte5()
{
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Os noivos estão interagindo com os convidados");
    ui->label3->setText("voce aceita interagir com eles?");
    ui->testo1->setText("sim");
    ui->testo2->setText("não");
    ui->testo3->setText(" ");

    if(ui->Button1->isChecked())
    {
        connect(ui->ok,SIGNAL(clicked()),this,SLOT(interacaocasal()));
    }
}
void Level::parte6()
{
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Você se encontra ao anoitecer na taberna. Lá vem Arnolfo Mão Forte, uma figura impressionante,\n com quase dois metros de altura e um corpo robusto, porém contente e, a esta hora, um pouco bêbado.");
    ui->label3->setText("É uma pequena festa, pois a escolta de honra (você!) sai amanhã com a noiva. \n Arnolfo parte cinco dias depois para o casamento.");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}
void Level::parte7()
{
    QPixmap label(":/images/bandidos.png");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Bandidos");
    ui->label3->setText(" ");
    ui->testo1->setText("Ataque Rapido");
    ui->testo2->setText("Ateque normal");
    ui->testo3->setText("Fugir");

    inimigo = new Inimigo;
    player = new Player;
    if(inimigo->life == 0){
        player->setEstagio(1);
    }
}
void Level::parte8()
{
    ui->label1->setText(" ");
    ui->label2->setText(" ");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}
void Level::parte9()
{}
void Level::parte10()
{}
void Level::parte11()
{}
void Level::parte12()
{}
void Level::parte13()
{}
void Level::parte14()
{}

void Level::passagem1()
{
    QPixmap label(":/images/javalitaberna.png");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("-------------------------------\nCAPITULO 1 - A TAVERNA DO JAVALI MANHOSO\n-------------------------------");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}

void Level::passagem2()
{
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("-------------------------------\nCAPITULO 2 - A VIAGEM\n-------------------------------");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}

void Level::passagem3()
{
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("-------------------------------\nCAPITULO 3 - O FORTE\n-------------------------------");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}

void Level::passagem4()
{
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("-------------------------------\nCAPITULO 4 - A CHEGADA\n-------------------------------");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}

void Level::interacaocasal()
{
    ui->label2->setText("A jovem noive esta interagindo com as pessoa");
    ui->label3->setText("O que voce faz ?");
    ui->testo1->setText("Roubo");
    ui->testo2->setText("Luta");
    ui->testo3->setText("swing");/*resoposta boa note dona desse monumental par de coxas*/
    int d20 =2 * rand() % 20;
    int carisma = player->getCarisma();
//    if (ui->Button3->isChecked()) {
//      ui->label3->setText("O que voce faz ?");
//      if ((d20 + carisma) > 20) {
//        QMessageBox msgBox;
//        msgBox.setText(
//            "Sua ação foi muito bem executado voce ganhou um dildo 20x20");
//        msgBox.exec();
//      }
//    }
    if(ui->Button3->isChecked())
    {
        connect(ui->ok,SIGNAL(clicked()),this,SLOT(negativas1(d20, carisma)));
    }

}

void Level::interacaoNegativas()
{

}

void Level::negativas1(int d20, int carisma)
{
    if(ui->Button3->isChecked())
    {
        ui->label3->setText("O que voce faz ?");
        if((d20+carisma) > 20)
        {
            QMessageBox msgBox;
            msgBox.setText("Sua ação foi muito bem executado voce ganhou um dildo 20x20");
            msgBox.exec();
        }
    }
}


void Level::on_direita_clicked()
{
       const int numberStates = 50; // or whatever the number of your states is
       static int counter = numberStates -1;
       ++counter %= numberStates; // increment and start over after last state

       if(counter == 0)
       {
           parteUm();
       }
       else if(counter == 1)
       {
           parteDois();
       }
       else if(counter == 2)
       {
           parteTres();
       }
       else if(counter == 3)
       {
           parteQuatro();
       }
       else if(counter == 4)
       {
           parte5();

       }
       else if(counter == 5)
       {
           parte6();

       }
       else if(counter == 6)
       {
           passagem1();
       }
       else if(counter == 7)/* <--- colo car consição de inpedimento de progesso da historia*/
       {
           parte7();
           if(ui->ok->isCheckable())
               return;

       }
       else if((counter == 8 && inimigo->life == 0) || ui->Button3->isChecked())
       {
           parte8();

       }
       else if(counter == 9)
       {

       }
}

void Level::on_esquerda_clicked()
{
}
