#include "level.h"
#include "ui_level.h"

Level::Level(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Level)
{
    ui->setupUi(this);
//    ui->label->setPixmap(label.scaled(350,350,Qt::KeepAspectRatioByExpanding));
    connect(ui->ok,SIGNAL(clicked()),this,SLOT(parteQuatro()));


//    for (size_t i = 0; i < 10; ++i)
//    {
//        QState *state = new QState();
//        state->setObjectName("State" + QString::number(i));
//        addState(state);
//    }


//    qInfo() << "Children:" << m_statemachine.children().length();

//    QFinalState *final = new QFinalState();
//    QState *p = qobject_cast<QState*>(m_states.last());
//    p->addTransition(ui->direita,&QPushButton::clicked,final);

//    connect(&m_statemachine, &QStateMachine::finished, this, &Level::parteQuatro);

//    m_statemachine.addState(final);
//    m_statemachine.setInitialState(m_states.at(0));

//    m_statemachine.start();
    parteZero();
    ui->vida->setValue(100);
    ui->mana->setValue(100);
}

Level::~Level()
{
//    qDeleteAll(m_states);
//    m_states.clear();
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
    ui->label3->setText("Dentre as tabernas da cidade uma se destaca pela boa comida, vinho farto e por seu proprietário.\n O lugar se chama 'O Barril de Cedro'. Seu dono é Arnolfo Mão Forte, um antigo capitão da Guarda Real \n que perdeu uma perna heroicamente em combate salvando, assim, o próprio Príncipe");

}

void Level::parteDois()
{
    if(true)
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("É amigo de Arnolfo, que goza de grande fama e amizade nesta raça por seu heroísmo nas guerras \n que expulsaram os orcos de Filanti para as cordi- \n lheiras de Keiss");
    }
    else if(false)
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("É primo do noivo, Tarislar, um meio-elfo de boa família, servindo como guarda junto do Barão Rimbard.");
    }
    else if(false)
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("É amigo da noiva. Uma pessoa bonita e gentil que sempre o recebe bem.");
    }
    else if(false)
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("O príncipe de Calco pediu pessoalmente que as autoridades de Saravossa enviassem um representante para escoltar a jovem como uma forma \n de agradecimento a Arnolfo e você foi o escolhido.");
    }
    else if(false)
    {
        QPixmap label(":/images/casal.png");
        ui->label1->setPixmap(label.scaled(100,100,Qt::KeepAspectRatioByExpanding));
        ui->label2->setText("Esta noite a taberna está particularmente festiva, pois a filha de Arnolfo,\n Rosiem, irá se casar e vocês são convidados de honra");
        ui->label3->setText("Você é um primo/amigo de infância da noiva ou aprendiz/amigo de Arnolfo Mão Forte");
    }
}

void Level::parteTres()
{
    QPixmap label(":/images/casal.png");
    ui->label1->setPixmap(label.scaled(200,200,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Cada um foi escolhido como escolta de honra que, por tradição, leva a noiva até o casamento ganhando \n ricos presentes durante a cerimônia.");
    ui->label3->setText("O casamento se dará no Forte Águas Profundas, pertencente ao Barão Rimbard, onde vive o noivo; \n nas montanhas perto de Tória, uma cidade bem ao sul de Calco, do outro lado das montanhas.");

}

void Level::parteZero()
{
    QPixmap label(":/images/transicao.png");
    ui->label1->setPixmap(label.scaled(250,250,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Sejam  Bem-vindos ao incrível mundo de Tagmar! Embarque numa aventura cheia de desafios, \n fama, fortuna e glória esperam por vocês.");

}

void Level::parteQuatro()
{
    QPixmap label(":/images/bandidos.png");
    ui->label1->setPixmap(label.scaled(200,200,Qt::KeepAspectRatioByExpanding));
    ui->label2->setText("Todos os personagens se encontram ao anoitecer na taberna. \n Lá eles veem Arnolfo Mão Forte, uma figura impressionante, com quase dois metros de altura e corpo de touro, \n porém contente e, a esta hora, um pouco bêbado");
    ui->label3->setText("É uma pequena festa, pois a escolta de honra (vocês!) sai amanhã com a noiva. \n Arnolfo parte cinco dias depois para o casamento.");

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
//    if(m_statemachine.isRunning()) qInfo() << "clicked";
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
           parteTres();
           break;
       case 5:
           parteTres();
           break;
       }
}

void Level::on_esquerda_clicked()
{
}



//void Level::addState(QState *state)
//{
//    state->assignProperty(ui->testo2,"text",state->objectName());
//    int i = m_states.length();
//    if(i < 0)
//    {
//        QState *p = qobject_cast<QState*>(m_states.at(i - 1));
//        p->addTransition(ui->direita,&QPushButton::clicked, state);
//    }
//    connect(state, &QState::entered, this, &Level::parteUm);
//    connect(state, &QState::exited, this, &Level::parteDois);
//    m_states.append(state);
//    m_statemachine.addState(state);
//}
