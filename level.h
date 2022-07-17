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
    void parteUm();
    void parteDois();
    void parteTres();
    void parteQuatro();
    void on_esquerda_clicked();
    void parteZero();
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
