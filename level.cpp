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
    personagem();
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
    player = new Player;
    QString raca = player->getRaca();
    if(raca == "Anões")
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("É amigo de Arnolfo, que goza de grande fama e amizade nesta raça por seu heroísmo nas guerras \n que expulsaram os orcos de Filanti para as cordilheiras de Keiss");
    }
    else if(raca == "Humano")
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
    ui->label2->setText("Vem uma gangue de arruaceiros entram de penetra na festa e começam a incomodar as damas, \nse o personagem intervir ele irá num duelo com o líder dos arruaceiros, se ganhar,\n recebe renome e recompensa, se falhar, a comoção alertará os guardas e eles expulsarão os intrusos.");
    ui->label3->setText("Combate com o líder dos arruaceiros");
    ui->testo1->setText("Ataque Rapido");
    ui->testo2->setText("Ateque normal");
    ui->testo3->setText("Fugir");

    inimigo = new Inimigo;
    player = new Player;
    if(inimigo->life == 0){
        player->setEstagio(1);
        //vitoria = ganha uma armadura leve
    }
}
void Level::parte8()
{
    ui->label1->setText("Haroldo (irmão mais novo) pede para se juntar ao grupo para proteger do perigo");
    ui->label2->setText(" ");
    ui->label3->setText(" ");
    ui->testo1->setText("sim");
    ui->testo2->setText("não");
    ui->testo3->setText(" ");
}
void Level::parte9()
{
    QPixmap label(":/images/viagem.jpg");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("A estrada");
    ui->label3->setText("No dia seguinte, todos acordam cedo, preparados para uma viagem de 10 dias. As despedidas são rápidas e Arnolfo lamenta não poder ir com vocês,\n devendo partir em 5 dias. A noiva está ansiosa e um pouco preocupada por causa do mau tempo, mas mostra sua felicidade com um belo sorriso.");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}
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
    QPixmap label(":/images/viagem.jpg");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("-------------------------------\nCAPITULO 2 - A VIAGEM\n-------------------------------");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}

void Level::passagem3()
{
    QPixmap label(":/images/forte.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("-------------------------------\nCAPITULO 3 - O FORTE\n-------------------------------");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}

void Level::passagem4()
{
    QPixmap label(":/images/achegada.jpg");
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
           passagem1();
       }
       else if(counter == 5)
       {
           parte5();
       }
       else if(counter == 6)
       {
           parte6();
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

void Level::personagem()
{
    ui->Nome->setText(getNome());
}

// Inivio

QString Level::getNome()
{
    return _nome;
}

void Level::setNome(QString nome)
{
    this->_nome = nome;
}

QString Level::getRaca()
{
    return _raca;
}

void Level::setRaca(QString raca)
{
    this->_raca = raca;
}

QString Level::getProficao1()
{
    return _proficao1;
}

void Level::setProficao1(QString Proficao1)
{
    _proficao1 = Proficao1;
}

QString Level::getProficao2()
{
    return _proficao2;
}

void Level::setProficao2(QString Proficao2)
{
    this->_proficao2 = Proficao2;
}

bool Level::getDeus()
{
    return _deus;
}

void Level::setDeus(bool deus)
{
    this->_deus = deus;
}

size_t Level::getEstagio()
{
    return _estagio;
}

void Level::setEstagio(size_t estagio)
{
    this->_estagio += estagio;
}

size_t Level::getLife()
{
    return _life;
}

void Level::setLife(size_t life)
{
    this->_life = life;
}

size_t Level::getAtaque()
{
    return _ataque;
}

void Level::setAtaque(size_t ataque)
{
    this->_ataque = ataque;
}

size_t Level::getDefesa()
{
    return _defesa;
}

void Level::setDefesa(size_t defesa)
{
    this->_defesa = defesa;
}

size_t Level::getIntelecto()
{
    return _intelecto;
}

void Level::setIntelecto(size_t intelecto)
{
    this->_intelecto = intelecto;
}

size_t Level::getFisico()
{
    return this->_fisico;
}

void Level::setFisico(size_t fisico)
{
    this->_fisico = fisico;
}

size_t Level::getAura()
{
    return this->_aura;
}

void Level::setAura(size_t aura)
{
    this->_aura = aura;
}

size_t Level::getCarisma()
{
    return _carisma;
}

void Level::setCarisma(size_t carisma)
{
    this->_carisma = carisma;
}

size_t Level::getForca()
{
    return _forca;
}

void Level::setForca(size_t forca)
{
    this->_forca = forca;
}

size_t Level::getAgilidade()
{
    return _agilidade;
}

void Level::setAgilidade(size_t agilidade)
{
    this->_agilidade = agilidade;
}

size_t Level::getPercepcao()
{
    return _percepcao;
}

void Level::setPercepcao(size_t percepcao)
{
    this->_percepcao = percepcao;
}

size_t Level::getMana()
{
    return _mana;
}

void Level::setMana(size_t mana)
{
    this->_mana = mana;
}
//Final


