#include "level.h"
#include "ui_level.h"
#include <QMessageBox>
#include <iostream>
#include <cstdlib>

Level::Level(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Level)
{
//    MainWindow mainwindow;
    ui->setupUi(this);
//    connect(ui->ok,SIGNAL(clicked()),this,SLOT(BbookMmage()));
    parteZero();
    ui->vida->setValue(25);
//    connect(this->ui->vida,SIGNAL(textChanged()),&mainwindow,SLOT());
//    ui->mana->setValue(100);
    ui->Button1->setChecked(true);
    ui->vida->setMaximum(25);
    personagem();
}

Level::~Level()
{
    delete ui;
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
    if(_raca == "Anões")
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("É amigo de Arnolfo, que goza de grande fama e amizade nesta raça por seu heroísmo nas guerras \n que expulsaram os orcos de Filanti para as cordilheiras de Keiss");
    }
    else if(_raca == "Humano")
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
    QMessageBox::StandardButton resposta = QMessageBox::question(this,""," Os noivos estão interagindo com os convidados", QMessageBox::Yes|QMessageBox::No);
    if(resposta==QMessageBox::Yes)
    {
        QMessageBox::about(this,"Na festa","Voce pucha conversaa com o casal e comenta sobre o dia e o tempo");
        QMessageBox::about(this,"Na festa","Voce ganha um aterfato emcantado um anel na cor escarlate");
        ui->comboBox->addItem("Anel - Emcantado");
    }
}

void Level::parte5()
{
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("você ve a irmã da noiva, ela é bela com a luz do luar");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
    QMessageBox::StandardButton resposta = QMessageBox::question(this,"","A irmã (irmão mais novo) pede para se juntar ao grupo para proteger do perigo", QMessageBox::Yes|QMessageBox::No);
    if(resposta==QMessageBox::Yes)
    {

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
    ui->testo1->setText("Ataque Rapido");
    ui->testo2->setText("Ateque normal");
    ui->testo3->setText("Fugir");
}
void Level::parte8()
{
    ui->label2->setText("No dia seguinte, todos acordam cedo, preparados para uma viagem de 10 dias. As despedidas são rápidas\ne Arnolfo lamenta não poder ir com vocês, devendo partir em 5 dias. A noiva está ansiosa e um pouco\npreocupada por causa do mau tempo, mas mostra sua felicidade com um belo sorriso.");
    ui->label3->setText("Um orcos persebel sua presença no local");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
    QMessageBox::StandardButton resposta = QMessageBox::question(this,"","Haroldo (irmão mais novo) pede para se juntar ao grupo para proteger do perigo", QMessageBox::Yes|QMessageBox::No);
    if(resposta==QMessageBox::Yes)
    {

    }
}
void Level::parte9()
{
    QPixmap label(":/images/estrada.jpg");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("A estrada");
    ui->label3->setText("No dia seguinte, todos acordam cedo, preparados para uma viagem de 10 dias.\n As despedidas são rápidas e Arnolfo lamenta não poder ir com vocês,\n devendo partir em 5 dias. A noiva está ansiosa e um pouco preocupada por causa do mau tempo, mas mostra sua felicidade com um belo sorriso.");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
    int d20 =2 * rand() % 20;
    if(d20 >= 15)
    {
        QMessageBox::about(this,"Na Estrada","Vocês já conseguiram transpor boa parte dos montes, se aproximando de seu objetivo.");
    }
    else
    {
        QMessageBox::about(this,"Na Estrada","Ladrões no meio do caminhao.");
        parte7();
    }
}
void Level::parte10()
{
    QPixmap label(":/images/chuva.jpg");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
    ui->label3->setText("A chuva não para e as nuvens estão se tomando mais pesadas, outra tempestade pode acontecer\n a qualquer momento. Ao chegar perto do castelo vocês ouvem duas vozes, ao que parece, discutindo.\nO portão de ferro está entreaberto.");
    ui->label2->setText("Quando o grupo se aproximar do forte pela área 1:");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}
void Level::parte11()
{
    QPixmap label(":/images/chuva.jpg");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
    ui->label3->setText("seu brasão ostenta um prato azul em fundo branco com moudura cinza");
    ui->label2->setText("as flâmulas e bandeiras mostrando as armas e brasão do Barão Rimbard");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}
void Level::parte12()
{
    QPixmap label(":/images/chuva.jpg");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
    ui->label3->setText(" ");
    ui->label2->setText("pois os orcos resolveram manter assim para que viajantes não  percebam a ocupação do Forte.");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
    QMessageBox::StandardButton resposta = QMessageBox::question(this,"","Deseja observar o que esta acontecendo dentro da fortificação?", QMessageBox::Yes|QMessageBox::No);
    if(resposta==QMessageBox::Yes)
    {
        int d20 = rand() % 20 + 1;
        if(d20 == 15)
        {
            ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
            ui->label2->setText("O portão é pesado e da forma como está uma pessoa pode entrar ou sair por vez");
            ui->label3->setText("Vocês veem dois seres de aparência humana, porém incrivelmente feios,\ncom braços grandes, corpo peludo, rosto deformado, dentes caninos inferiores\nprotuberantes e ligeiramente corcundas,\nsão certamente os terríveis orcos.");
            ui->testo1->setText(" ");
            ui->testo2->setText(" ");
            ui->testo3->setText(" ");
            int d20 = rand() % 20 + 1;
            const int numberStates = 50; // or whatever the number of your states is
            static int counter = numberStates -1;
//            ++counter %= numberStates; // increment and start over after last state
            if(ui->ok->isChecked()) {
                ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
                ui->label2->setText("Eles estão no alto da torre do portão, discutindo enfurecidamente, quase aos tapas e, em frente,\n um pequeno galpão com a porta aberta. Dentro, se vê uma mesa com dois outros sentados e bebendo,\n uma lareira acesa e mais um deles com aparência ameaçadora em pé na porta.");
                ui->label3->setText("Vocês veem dois seres de aparência humana, porém incrivelmente feios,\ncom braços grandes, corpo peludo, rosto deformado, dentes caninos inferiores\nprotuberantes e ligeiramente corcundas,\nsão certamente os terríveis orcos.");
                ui->testo1->setText(" ");
                ui->testo2->setText(" ");
                ui->testo3->setText(" ");
                ++counter %= numberStates; // increment and start over after last state
            }
            if(ui->ok->isChecked() && counter == 1) {
                ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
                ui->label3->setText(" ");
                ui->label2->setText("Com um urro o orco que estava na porta, pega seu machado e corre em sua direção. Os demais,\n alertados pelo berro, se armam e se preparam para a batalha.");
                ui->testo1->setText(" ");
                ui->testo2->setText(" ");
                ui->testo3->setText(" ");
//                Se o grupo não foi percebido eles poderão tomar a iniciativa podendo se utilizar da técnica de combate Ataque Oportuno. Deixe o grupo planeja a ação deles.
            }

        }
        else
        {
            ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
            ui->label2->setText("toca o alarme.");
            ui->label3->setText("Um orcos persebel sua presença no local");
            ui->testo1->setText(" ");
            ui->testo2->setText(" ");
            ui->testo3->setText(" ");

        }
    }
    //
}
void Level::parte13()
{
//    QPixmap label(":/images/orc.png");
//    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
//    ui->label2->setText("O portão é pesado e da forma como está uma pessoa pode entrar ou sair por vez");
//    ui->label3->setText("Vocês veem dois seres de aparência humana, porém incrivelmente feios,\ncom braços grandes, corpo peludo, rosto deformado, dentes caninos inferiores\nprotuberantes e ligeiramente corcundas,\nsão certamente os terríveis orcos.");
//    ui->testo1->setText(" ");
//    ui->testo2->setText(" ");
//    ui->testo3->setText(" ");

//    if(ui->ok->isChecked()) {
//        ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
//        ui->label2->setText("Eles estão no alto da torre do portão, discutindo enfurecidamente, quase aos tapas e, em frente,\n um pequeno galpão com a porta aberta. Dentro, se vê uma mesa com dois outros sentados e bebendo,\n uma lareira acesa e mais um deles com aparência ameaçadora em pé na porta.");
//        ui->label3->setText("Vocês veem dois seres de aparência humana, porém incrivelmente feios,\ncom braços grandes, corpo peludo, rosto deformado, dentes caninos inferiores\nprotuberantes e ligeiramente corcundas,\nsão certamente os terríveis orcos.");
//        ui->testo1->setText(" ");
//        ui->testo2->setText(" ");
//        ui->testo3->setText(" ");
//     }
}
void Level::parte14()
{
    ui->label2->setText("No dia seguinte, todos acordam cedo, preparados para uma viagem de 10 dias. As despedidas são rápidas\ne Arnolfo lamenta não poder ir com vocês, devendo partir em 5 dias. A noiva está ansiosa e um pouco\npreocupada por causa do mau tempo, mas mostra sua felicidade com um belo sorriso.");
    ui->label3->setText("Um orcos persebel sua presença no local");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}

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
    ui->label1->setPixmap(label.scaled(250,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("-------------------------------\nCAPITULO 2 - A VIAGEM\n-------------------------------");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}

void Level::passagem3()
{
    QPixmap label(":/images/forte.png");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
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
    ui->testo1->setText("saber a historia do casal");
    ui->testo2->setText("?");
    ui->testo3->setText("?");
}

void Level::interacaoNegativas()
{
    ui->label2->setText("A jovem noive esta interagindo com as pessoa");
    ui->label3->setText("O que voce faz ?");
    ui->testo1->setText("Roubo");
    ui->testo2->setText("Luta");
    ui->testo3->setText(" ");
//    int d20 =2 * rand() % 20;
//    int d6 =2 * rand() % 6;
    if(ui->Button3->isChecked())
    {
        connect(ui->ok,SIGNAL(clicked()),this,SLOT(negativas1()));
    }
}

void Level::negativas1()
{
    int d20 = 2, carisma = 9;
    if(ui->Button3->isChecked())
    {
        ui->label3->setText("O que voce faz ?");
        if((d20+carisma) > 20)
        {
            QMessageBox msgBox;
            msgBox.setText("  ");
            msgBox.exec();
        }
    }
}


void Level::on_direita_clicked()
{
    inimigo = new Inimigo;
    const int numberStates = 50; // or whatever the number of your states is
    static int counter = numberStates -1;
    ++counter %= numberStates; // increment and start over after last state
    switch (counter) {
        case 0:
            parteUm();
            break;
        case 1:
            parteDois();
            break;
        case 2:
            parteTres();
            break;
        case 3:
            parteQuatro();
            break;
        case 4:
//        parte5();
            break;
        case 5:
            break;
        case 6:
            passagem1();
            break;
        case 7:
            parte6();
            break;
        case 8:
            inimigo->life = 20;

            ui->vidaInimigo->setValue(inimigo->life);
            ui->vidaInimigo->setMaximum(inimigo->life);

            parte7();

            ui->label2->setText("Vem uma gangue de arruaceiros entram de penetra na festa e começam a incomodar as damas, \nse o personagem intervir ele irá num duelo com o líder dos arruaceiros, se ganhar,\n recebe renome e recompensa, se falhar, a comoção alertará os guardas e eles expulsarão os intrusos.");
            ui->label3->setText("Combate com o líder dos arruaceiros");
           if(ui->Button1->isChecked()&&ui->ok->isChecked()){
               int d20 =2 * rand() % 20;
               int d6 =2 * rand() % 6;
               inimigo->defesa = d6;
               inimigo->life = inimigo->defesa/2;
               ui->vidaInimigo->setValue(inimigo->life);
            }
//            QMessageBox::about(this,"Gangue","Vem uma gangue de arruaceiros e ataque de oportunidade.");
            _life -= 5;
            ui->vida->setValue(_life);
//            QMessageBox::about(this,"Gangue","Vem uma gangue de arruaceiros e ataque de oportunidade.");

            break;
        case 9:
            parte8();
            break;
        case 10:
            passagem2();
            break;
        case 11:
            parte9();
            break;
        case 12:
            passagem3();
            break;
        case 13:
            parte10();
            break;
        case 14:
            parte11();
            break;
        case 15:
            parte12();
            break;
        case 16:
            parte13();
            break;
   }
}

void Level::personagem()
{
    ui->Nome->setText(_nome);
    if(_proficao1=="Bardos"){
        QPixmap label(":/images/armas4.jpeg");
        ui->image->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->lineEdit->setText("Espada longa");
        ui->dano->setText("2d6+2");
        ui->critico->setText("14");
        ui->tipo->setText("Perfurante");
        QMessageBox::about(this,"Bardo","O contador de histórias, sua voz mágica ecoa na alma de todos ao redor, ele usa um misto de poderes mágicos e marciais, infelizmente ele não foca em nenhum");
    }

    else if(_proficao1=="Guerreiros"){
        QPixmap label(":/images/armas4.jpeg");
        ui->image->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->lineEdit->setText("Machado");
        ui->dano->setText(" 2d10");
        ui->critico->setText("20");
        ui->tipo->setText("Perfurante");
        QMessageBox::about(this,"Guerreiros","Capaz de usar todas as armas e armaduras, o indomável guerreiro é dificilmente derrubado, você começa com uma espada");
    }
    else if(_proficao1=="Ladinos"){
        QPixmap label(":/images/armas1.jpeg");
        ui->image->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        ui->lineEdit->setText("Adaga");
        ui->dano->setText("1d4+3");
        ui->critico->setText("7");
        ui->tipo->setText("Perfurante");
        QMessageBox::about(this,"Ladinos","Especialista em muitas áreas, versátil e perspicaz, só pode usar de armamento leve, mas de todas as armas que requeiram destreza");

    }
    else if(_proficao1=="Magos"){
        QPixmap label(":/images/armas6.jpeg");
        ui->image->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->lineEdit->setText("Cajado");
        ui->dano->setText("+3");
        ui->critico->setText(" - ");
        ui->tipo->setText("Impacto");
        QMessageBox::about(this,"Magos","O escolar focado em descobrir os segredos místicos, cauteloso com seu cajado, ele não precisa de armaduras ou armas");
    }
    else if(_proficao1=="Rastreadores"){
        QPixmap label(":/images/armas3.jpeg");
        ui->image->setPixmap(label.scaled(80,80,Qt::KeepAspectRatioByExpanding));
        ui->lineEdit->setText("Arco Longo");
        ui->dano->setText("1d12+3");
        ui->critico->setText("15");
        ui->tipo->setText("Perfurante");
        QMessageBox::about(this,"Rastreadores","Sobrevivendo fora da civilização, ele aprendeu a usar a magia natural, enquanto se defendia dos perigos do mundo desconhecido, você pode tanto usar magias como espadas e armaduras médias");
    }
    else if(_proficao1=="Sacerdotes"){
        QPixmap label(":/images/armas2.jpeg");
        ui->image->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->lineEdit->setText("Cajado");
        ui->dano->setText("+3");
        ui->critico->setText(" - ");
        ui->tipo->setText("Impacto");
        QMessageBox::about(this,"Sacerdotes","Um campeão divino, e portador da crença, ao mesmo tempo que canaliza milagres mágicos, pode usar armas de impacto e armadura média");
    }
}

void Level::combate(int d20, int d6)
{
    if(d20 > 15)
    {
        inimigo->defesa = d6;
        inimigo->life = inimigo->defesa/2;
    }
    else{
        QMessageBox::about(this,"Luta","Capaz de usar todas as armas e armaduras, o indomável guerreiro é dificilmente derrubado, você começa com uma espada");
    }
    if(inimigo->life == 0)
    {
        setEstagio(1);
        ui->experiencia->setValue(1);
        //vitoria = ganha uma armadura leve
    }
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

void Level::on_magias_clicked()
{
    book = new BookMage(this);
    book->show();
}

