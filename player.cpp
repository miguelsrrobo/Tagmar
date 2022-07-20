#include "player.h"
#include <time.h>       /* time */
Player::Player()
{
//    life = 100;

//    defesa = 100;

    //    ataque = rand() % 100;
}

QString Player::getNome()
{
    return _nome;
}

void Player::setNome(QString nome)
{
    this->_nome = nome;
}

QString Player::getRaca()
{
    return _raca;
}

void Player::setRaca(QString raca)
{
    this->_raca = raca;
}

QString Player::getProficao1()
{
    return _proficao1;
}

void Player::setProficao1(QString Proficao1)
{
    _proficao1 = Proficao1;
}

QString Player::getProficao2()
{
    return _proficao2;
}

void Player::setProficao2(QString Proficao2)
{
    this->_proficao2 = Proficao2;
}
