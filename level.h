#ifndef LEVEL_H
#define LEVEL_H

#include <QAbstractState>
#include <QStateMachine>
#include <QMainWindow>
#include <QMessageBox>
#include <QFinalState>
#include <QDialog>
#include <QPixmap>
#include <cstdlib>
#include <QDebug>
#include <QState>

#include "bookmage.h"
#include "bookmage.h"
#include "inimigo.h"
#include "player.h"
#include "mapa.h"

namespace Ui {
class Level;
}

class Level : public QMainWindow
{
    Q_OBJECT

public:
    explicit Level(QWidget *parent = nullptr);
    ~Level();



private slots:
    void on_direita_clicked();
    void BbookMmage();
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
    void negativas1(int d20, int carisma);
    void on_esquerda_clicked();
private:
    Ui::Level *ui;
    BookMage *book;
    Inimigo *inimigo;
    size_t m_danoTotal;
    QString mageId;
    size_t incremento = 1;
    Player *player;
//    QList<QAbstractState*> m_states;
//    QStateMachine m_statemachine;
//    void addState(QState *state);
};

#endif // LEVEL_H
