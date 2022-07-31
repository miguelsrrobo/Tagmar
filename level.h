#ifndef LEVEL_H
#define LEVEL_H


#include <QMainWindow>
#include <QMessageBox>
#include <QDialog>
#include <QPixmap>
#include <cstdlib>
#include <QDebug>

#include "bookmage.h"
#include "bookmage.h"
#include "inimigo.h"
//#include "mapa.h"

namespace Ui {
class Level;
}

class Level : public QMainWindow
{
    Q_OBJECT

public:
    explicit Level(QWidget *parent = nullptr);
    ~Level();


//    void SetMainwindow(MainWindow* window)
//    {
//      m_window = window;
//    };

private slots:
    void on_direita_clicked();

    void parteZero();
    void parteUm();
    void parteDois();
    void parteTres();
    void parteQuatro();
    void parte5();
    void parte6();
    void parte7();
    void parte8();
    void parte9();
    void parte10();
    void parte11();
    void parte12();
    void parte13();
    void parte14();
    void passagem1();
    void passagem2();
    void passagem3();
    void passagem4();
    void interacaocasal();
    void interacaoNegativas();
    void negativas1();
    void personagem();
    void combate();
    void end();
    void mage();
    void orc();
private:
    Ui::Level *ui;
    BookMage *book;
    Inimigo *inimigo;
    size_t m_danoTotal;
    QString mageId;
    size_t incremento = 1;
//    Player *player;
//    QList<QAbstractState*> m_states;
//    QStateMachine m_statemachine;
//    void addState(QState *state);
//    MainWindow* m_window;
    QString _nome, _raca, _proficao1, _proficao2, _classe;
    bool _deus;
    bool _estagio;
    size_t _life, _ataque = 0, _defesa = 0, _mana;
    size_t _intelecto = 0, _fisico = 0, _aura = 0, _carisma = 0, _forca = 0, _agilidade = 0, _percepcao = 0;

};

#endif // LEVEL_H
