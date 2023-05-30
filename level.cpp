#include "level.h"
#include "ui_level.h"
#include <QMessageBox>
#include <iostream>
#include <cstdlib>
#include <random>
#include "mainwindow.h"

Level::Level(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Level)
{
    ui->setupUi(this);
    parteZero();
    ui->Button1->setChecked(true);

    //    ui->mana->setValue(100);

    for(;;)
    {
        MainWindow* mainWindow = qobject_cast<MainWindow*>(parent);
        if(mainWindow)
        {
            _raca = mainWindow->GetRaca();
            _proficao1 = mainWindow->GetClasse();
            _nome = mainWindow->GetNome();
            _proficao2 = mainWindow->GetProficao2();
            _deus = mainWindow->GetDeus();
            _estagio = mainWindow->GetEstagio();
            _life = mainWindow->GetLife();
            _ataque = mainWindow->GetAtaque();
            _defesa = mainWindow->GetDefesa();
            _mana = mainWindow->GetMana();
            _intelecto = mainWindow->GetIntelecto();
            _fisico = mainWindow->GetFisico();
            _aura = mainWindow->GetAura();
            _carisma = mainWindow->GetCarisma();
            _forca = mainWindow->GetForca();
            _agilidade = mainWindow->GetAgilidade();
            _percepcao = mainWindow->GetPercepcao();
            break;
        }
//        parent = parent->parent();
        if(!parent)
        {
            // appropriate error handling
            break;
        }
    }

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
    ui->label2->setText("No sul de Calco existe uma cidade chamada Abrasil, a cidade dos pequeninos de Calco, \n fundada por eles. Abrasil é conhecida por suas festas e pelos seus excelentes vinhos.");
    ui->label3->setText("Dentre as tabernas da cidade uma se destaca pela boa comida, vinho farto e por seu proprietário.\n O lugar se chama 'O Barril de Cedro'. Seu dono é Arnolfo Mão Forte, um antigo capitão da Guarda Real \n que perdeu uma perna heroicamente em combate salvando, assim, o próprio Príncipe");

}

void Level::parteDois()
{
    //    QString raca = player->getRaca();
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
    QMessageBox::StandardButton resposta = QMessageBox::question(this,""," Os noivos estão interagindo com os convidados, \n você quer se juntar a eles?", QMessageBox::Yes|QMessageBox::No);
    if(resposta==QMessageBox::Yes)
    {
        QMessageBox::about(this,"Na festa","Você puxa conversa na festa e comenta sobre o dia e o tempo");
        QMessageBox::about(this,"Na festa","Você ganha um artefato encantado, um anel escarlate");
        ui->comboBox->addItem("Anel - Emcantado - Errado? - 404");
    }
}

void Level::parte5()
{
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Você enxerga a mesa do bar, e nela, tem um grupo de pessoas \n conversando e comentando sobre o casal.");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
    if(ui->Button1->isChecked()){
        QMessageBox::StandardButton resposta = QMessageBox::question(this,"","Um homem alto e velho lhe chama, você aceita o convite?", QMessageBox::Yes|QMessageBox::No);
        if(resposta==QMessageBox::Yes){
            parte13();
        }
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
    ui->testo2->setText("Ataque Normal");
    ui->testo3->setText(" ");
}
void Level::parte8()
{
    QPixmap label(":/images/alvorada.jpg");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("No dia seguinte, todos acordam cedo, preparados para uma viagem de 10 dias. As despedidas são rápidas \n e Arnolfo lamenta não poder ir com vocês, devendo partir em 5 dias. A noiva está ansiosa e um pouco \n preocupada por causa do mau tempo, mas mostra sua felicidade com um belo sorriso.");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
    QMessageBox::StandardButton resposta = QMessageBox::question(this,"","Haroldo (irmão mais novo) pede para se juntar ao grupo para proteger do perigo", QMessageBox::Yes|QMessageBox::No);
    if(resposta==QMessageBox::Yes)
    {
        _ataque += 2;
        QMessageBox::about(this,"","Seus ataques causarão +2 de dano");

    }
}
void Level::parte9()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1,20);
    QPixmap label(":/images/estrada.jpg");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("A estrada");
    ui->label3->setText("No dia seguinte, todos acordam cedo, preparados para uma viagem de 10 dias.\n As despedidas são rápidas e Arnolfo lamenta não poder ir com vocês,\n devendo partir em 5 dias. A noiva está ansiosa e um pouco preocupada por causa do mau tempo, mas mostra sua felicidade com um belo sorriso.");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");

    if(dist(mt)*2 >= 15)
    {
        QMessageBox::about(this,"Na Estrada","Vocês já conseguiram transpor boa parte dos montes, se aproximando de seu objetivo.");
    }
    else
    {
        QMessageBox::about(this,"Na Estrada","Ladrões aparecem no meio do caminho.");
        inimigo->defesa = 20;
        inimigo->life = 20;
        _estagio = true;
        parte7();
        connect(ui->ok,SIGNAL(clicked()),this,SLOT(combate()));
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
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(1,20);
    QPixmap label(":/images/chuva.jpg");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
    ui->label3->setText(" ");
    ui->label2->setText(" os orcos resolveram manter assim para que viajantes não percebam a ocupação do Forte.");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
    QMessageBox::StandardButton resposta = QMessageBox::question(this,"","Deseja observar o que esta acontecendo dentro da fortificação?", QMessageBox::Yes|QMessageBox::No);
    if(resposta==QMessageBox::Yes)
    {
        if(dist(mt) == 15)
        {
            ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
            ui->label2->setText("O portão é pesado e da forma como está uma pessoa pode entrar ou sair por vez");
            ui->label3->setText("Vocês veem dois seres de aparência humana, porém incrivelmente feios,\ncom braços grandes, corpo peludo, rosto deformado, dentes caninos inferiores\nprotuberantes e ligeiramente corcundas,\nsão certamente os terríveis orcos.");
            ui->testo1->setText(" ");
            ui->testo2->setText(" ");
            ui->testo3->setText(" ");
            if(ui->Button1->isChecked()) {
//                connect(ui->ok,SIGNAL(clicked()),this,SLOT(orc()));
                std::uniform_int_distribution<int> dd20(1,20);
                ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
                ui->label2->setText("Eles estão no alto da torre do portão, discutindo enfurecidamente, quase aos tapas e, em frente,\n um pequeno galpão com a porta aberta. Dentro, se vê uma mesa com dois outros sentados e bebendo,\n uma lareira acesa e mais um deles com aparência ameaçadora em pé na porta.");
                ui->label3->setText("Vocês veem dois seres de aparência humana, porém incrivelmente feios,\ncom braços grandes, corpo peludo, rosto deformado, dentes caninos inferiores\nprotuberantes e ligeiramente corcundas,\nsão certamente os terríveis orcos.");
                ui->testo1->setText(" ");
                ui->testo2->setText(" ");
                ui->testo3->setText(" ");
                if(dd20(mt) >= 15) {
                    QMessageBox::about(this,"","Com um urro o orco que estava na porta, pega seu machado e corre em sua direção. Os demais,\n alertados pelo berro, se armam e se preparam para a batalha.");
                    QMessageBox::about(this,"Orco","Voce corre, você não aguenta um orco numa luta.");
                }
                else{
                    QMessageBox::about(this,"","Você não foi percebido Você podera tomar a iniciativa podendo se utilizar da técnica de combate Ataque Oportuno. Deixe o grupo planeja a ação deles.");
                }

            }
        }
        else
        {
            ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
            ui->label2->setText("toca o alarme.");
            ui->label3->setText("Um orco persebel sua presença no local");
            ui->testo1->setText(" ");
            ui->testo2->setText(" ");
            ui->testo3->setText(" ");
            if(ui->Button1->isChecked()) {
                QMessageBox::about(this,"Orco","Voce corre, você não aguenta um orco numa luta.");
            }
        }
    }
    //
}
void Level::parte13()
{
    QPixmap label(":/images/ferumbras.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Um senhor oferece uma caneca de cerveja");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->Button2->setText(" Clique a qui (→)");
    ui->testo3->setText(" ");
    ui->comboBox->addItem("Posão divina");
    QMessageBox::about(this,"","voce ganhou uma artefato");
}
void Level::parte14()
{
    QPixmap label(":/images/ferumbras.jpg");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("voce entra dentro dentro da torre e derrepente");
    ui->label3->setText("ola meu caro");
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
    QPixmap label(":/images/ferumbras.png");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Esperando dentro da torre um homem velho e alto de barba branca");
    ui->label3->setText("O homem olha para voce, e derrepente");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}

void Level::interacaoNegativas()
{
    QPixmap label(":/images/esplosao.jpg");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Uma explosão acontece");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}

void Level::negativas1()
{
    QPixmap label(":/images/ferumbrasjovem.jpg");
    ui->label1->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Uma explosão acontece");
    ui->label3->setText(" ");
    ui->testo1->setText(" ");
    ui->testo2->setText(" ");
    ui->testo3->setText(" ");
}


void Level::on_direita_clicked()
{
    ui->vida->setMaximum(_life-1);
    ui->vida->setValue(_life-1);
//    ui->magias->autoDefault();
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
        parte5();
            break;
        case 5:
        passagem1();

        break;
        case 6:
        parte6();
        ui->Button2->setText("");

        break;
        case 7:
        inimigo->life = 20;

        ui->vidaInimigo->setValue(inimigo->life);
        ui->vidaInimigo->setMaximum(inimigo->life);

        parte7();

        ui->label2->setText("Vem uma gangue de arruaceiros entram de penetra na festa e começam a incomodar as damas, \nse o personagem intervir ele irá num duelo com o líder dos arruaceiros, se ganhar,\n recebe renome e recompensa, se falhar, a comoção alertará os guardas e eles expulsarão os intrusos.");
        ui->label3->setText("Combate com o líder dos arruaceiros");
        if(ui->Button1->isChecked()){
            QMessageBox::about(this,"Gangue","Vem uma gangue de arruaceiros e ataque de oportunidade.");
            connect(ui->ok,SIGNAL(clicked()),this,SLOT(combate()));
        }
        else if(_estagio)
        {
            ui->experiencia->setValue(1);
        }
        break;
        case 8:
        ui->Button2->setText("");
        parte8();
            break;
        case 9:
        passagem2();
        if(_estagio){
            ui->experiencia->setValue(2);
        }
            break;
        case 10:
           _estagio = false;
           inimigo->life = 20;
           ui->vidaInimigo->setValue(inimigo->life);
           ui->vidaInimigo->setMaximum(inimigo->life);
           parte9();
            break;
        case 11:
           passagem3();
           _estagio = false;
            break;
        case 12:
        parte10();

            break;
        case 13:
        parte11();

            break;
        case 14:
        parte12();

            break;
        case 15:
        parte14();

            break;
        case 16:
        interacaocasal();

            break;
        case 17:
        interacaoNegativas();

            break;
        case 18:
        ui->vidaInimigo->setValue(100);
        ui->vidaInimigo->setMaximum(100);

        negativas1();
        ui->testo1->setText("Ataque Rapido");

        if(ui->Button1->isChecked()){
            QMessageBox::about(this,"Ferumbras","Combate com Ferumbras");
            connect(ui->ok,SIGNAL(clicked()),this,SLOT(mage()));
        }
        if(_estagio){
            ui->experiencia->setValue(3);
            counter++;
        }

        break;
        case 19:
        QPixmap label(":/images/the_end.jpg");
        ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText(" ");
        ui->label3->setText(" ");
        ui->testo1->setText(" ");
        ui->testo2->setText(" ");
        ui->testo3->setText(" ");
        break;
   }
}

void Level::personagem()
{
//    QString raca = m_window->GetRaca();
    ui->Nome->setText(_nome);
    ui->Raca->setText(_raca);
    ui->Proficao1->setText(_proficao1);
    if(_proficao1=="Bardos"){
        QPixmap label(":/images/armas4.jpeg");
        ui->image->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->lineEdit->setText("Espada longa");
        ui->dano->setText("2d6+2");
        ui->critico->setText("14");
        ui->tipo->setText("Perfurante");
        ui->intelectoLabel->setText("2");
        ui->auraLabel->setText("2");
        ui->carismaLabel->setText("6");
        ui->forcaLabel->setText("0");
        ui->fisicoLabel->setText("1");
        ui->agilidadeLabel->setText("3");
        ui->percepcaoLabel->setText("1");
    }
    else if(_proficao1=="Guerreiros"){
        QPixmap label(":/images/armas5.jpeg");
        ui->image->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        ui->lineEdit->setText("Machado");
        ui->dano->setText(" 2d10");
        ui->critico->setText("20");
        ui->tipo->setText("Perfurante");
        ui->intelectoLabel->setText("0");
        ui->auraLabel->setText("0");
        ui->carismaLabel->setText("0");
        ui->forcaLabel->setText("7");
        ui->fisicoLabel->setText("6");
        ui->agilidadeLabel->setText("2");
        ui->percepcaoLabel->setText("0");
    }
    else if(_proficao1=="Ladinos"){
        QPixmap label(":/images/armas1.jpeg");
        ui->image->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        ui->lineEdit->setText("Adaga");
        ui->dano->setText("1d4+3");
        ui->critico->setText("7");
        ui->tipo->setText("Perfurante");
        ui->intelectoLabel->setText("2");
        ui->auraLabel->setText("0");
        ui->carismaLabel->setText("3");
        ui->forcaLabel->setText("1");
        ui->fisicoLabel->setText("1");
        ui->agilidadeLabel->setText("5");
        ui->percepcaoLabel->setText("3");
    }
    else if(_proficao1=="Magos"){
        QPixmap label(":/images/armas6.jpeg");
        ui->image->setPixmap(label.scaled(150,150,Qt::KeepAspectRatioByExpanding));
        ui->lineEdit->setText("Cajado");
        ui->dano->setText("+3");
        ui->critico->setText(" - ");
        ui->tipo->setText("Impacto");
        ui->intelectoLabel->setText("5");
        ui->auraLabel->setText("6");
        ui->carismaLabel->setText("1");
        ui->forcaLabel->setText("0");
        ui->fisicoLabel->setText("0");
        ui->agilidadeLabel->setText("1");
        ui->percepcaoLabel->setText("2");
    }
    else if(_proficao1=="Rastreadores"){
        QPixmap label(":/images/armas3.jpeg");
        ui->image->setPixmap(label.scaled(80,80,Qt::KeepAspectRatioByExpanding));
        ui->lineEdit->setText("Arco Longo");
        ui->dano->setText("1d12+3");
        ui->critico->setText("15");
        ui->tipo->setText("Perfurante");
        ui->intelectoLabel->setText("0");
        ui->auraLabel->setText("1");
        ui->carismaLabel->setText("0");
        ui->forcaLabel->setText("2");
        ui->fisicoLabel->setText("3");
        ui->agilidadeLabel->setText("3");
        ui->percepcaoLabel->setText("6");
    }
}

void Level::combate()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> d20(1,20);
    std::uniform_int_distribution<int> d6(1,6);
    if(d20(mt) > 15){
        inimigo->defesa = d6(mt) * 2 + _forca + _ataque;
        if(inimigo->defesa/2 > inimigo->life || inimigo->life == 0)
        {
            inimigo->life = 0;
            ui->vidaInimigo->setValue(inimigo->life);
            _estagio = true;
            QMessageBox::about(this,"Sacerdotes","");
            ui->label3->setText(" ");
        }
        else{
            inimigo->life = inimigo->defesa/2;
            ui->vidaInimigo->setValue(inimigo->life);
            QMessageBox::about(this,"Gangue","Você levou dano");
            std::uniform_int_distribution<int> dano(1,5);
            _life -= dano(mt);
            ui->vida->setValue(_life);
        }
        ui->label3->setText(" ");
    }
    else
    {
        ui->label3->setText("Errou o ataque");

    }
}

void Level::end()
{
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> d20(1,20);
    std::uniform_int_distribution<int> d6(1,6);
    if(d20(mt) > 15){
        inimigo->defesa = d6(mt) * 2 + _forca + _ataque;
        if(inimigo->defesa/2 > inimigo->life || inimigo->life == 0)
        {
            inimigo->life = 0;
            ui->vidaInimigo->setValue(inimigo->life);
            ui->experiencia->setValue(1);
            QMessageBox::about(this,"Sacerdotes","");
            ui->label3->setText(" ");
        }
        else{
            inimigo->life = inimigo->defesa/2;
            ui->vidaInimigo->setValue(inimigo->life);
            QMessageBox::about(this,"Orc","Você levou dano");
            std::uniform_int_distribution<int> dano(1,9);
            _life -= dano(mt);
            ui->vida->setValue(_life);
        }
        ui->label3->setText(" ");
    }
    else
    {
        ui->label3->setText("Errou o ataque");

    }
}

void Level::mage()
{
//    book = new BookMage(this);
//    book->show();
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> d20(1,20);
    std::uniform_int_distribution<int> d6(1,6);

    if(d20(mt) > 15){
        inimigo->defesa = d6(mt) * 2 + _forca;
        if(inimigo->defesa/2 > inimigo->life || inimigo->life == 0)
        {
            inimigo->life = 0;
            ui->vidaInimigo->setValue(inimigo->life);
            _estagio = true;
            QMessageBox::about(this,"Sacerdotes","");
            ui->label3->setText(" ");
        }
        else{
            inimigo->life = inimigo->defesa/2;
            ui->vidaInimigo->setValue(inimigo->life);
            QMessageBox::about(this,"Gangue","Você levou dano");
            std::uniform_int_distribution<int> dano(1,5);
            _life -= dano(mt);
            ui->vida->setValue(_life);
        }
        ui->label3->setText(" ");
    }
    else
    {
        ui->label3->setText("Errou o ataque");
    }
    if(inimigo->life == 0)
    {
        QPixmap label(":/images/the_end.jpg");
        ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText(" ");
        ui->label3->setText(" ");
        ui->testo1->setText(" ");
        ui->testo2->setText(" ");
        ui->testo3->setText(" ");
    }
}

void Level::orc()
{

}
