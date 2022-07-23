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


    //Inicio
    QString getNome();
    void setNome(QString nome);
    QString getRaca();
    void setRaca(QString raca);
    QString getProficao1();
    void setProficao1(QString Proficao1);
    QString getProficao2();
    void setProficao2(QString Proficao2);

    bool getDeus();
    void setDeus(bool deus);
    size_t getEstagio();
    void setEstagio(size_t estagio);
    size_t getLife();
    void setLife(size_t life);

    size_t getAtaque();
    void setAtaque(size_t ataque);

    size_t getDefesa();
    void setDefesa(size_t defesa);

    size_t getIntelecto();
    void setIntelecto(size_t intelecto);

    size_t getFisico();
    void setFisico(size_t fisico);

    size_t getAura();
    void setAura(size_t aura);

    size_t getCarisma();
    void setCarisma(size_t carisma);

    size_t getForca();
    void setForca(size_t forca);

    size_t getAgilidade();
    void setAgilidade(size_t agilidade);

    size_t getPercepcao();
    void setPercepcao(size_t percepcao);


    size_t getMana();
    void setMana(size_t mana);
    //Fim

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
    void negativas1(int d20, int carisma);
    void personagem();


    void on_magias_clicked();

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

    QString _nome, _raca, _proficao1, _proficao2;
    bool _deus;
    size_t _estagio;
    size_t _life = 0, _ataque = 0, _defesa = 0, _mana;
    size_t _intelecto = 0, _fisico = 0, _aura = 0, _carisma = 0, _forca = 0, _agilidade = 0, _percepcao = 0;
};

#endif // LEVEL_H
