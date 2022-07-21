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

bool Player::getDeus()
{
    return _deus;
}

void Player::setDeus(bool deus)
{
    this->_deus = deus;
}

size_t Player::getEstagio()
{
    return _estagio;
}

void Player::setEstagio(size_t estagio)
{
    this->_estagio = estagio;
}

size_t Player::getLife()
{
    return _life;
}

void Player::setLife(size_t life)
{
    this->_life = life;
}


size_t Player::getAtaque()
{
    return _ataque;
}

void Player::setAtaque(size_t ataque)
{
    this->_ataque = ataque;
}

size_t Player::getDefesa()
{
    return _defesa;
}

void Player::setDefesa(size_t defesa)
{
    this->_defesa = defesa;
}

size_t Player::getIntelecto()
{
    return _intelecto;
}

void Player::setIntelecto(size_t intelecto)
{
    this->_intelecto = intelecto;
}

size_t Player::getFisico()
{
    return this->_fisico;
}

void Player::setFisico(size_t fisico)
{
    this->_fisico = fisico;
}

size_t Player::getAura()
{
    return this->_aura;
}

void Player::setAura(size_t aura)
{
    this->_aura = aura;
}

size_t Player::getCarisma()
{
    return _carisma;
}

void Player::setCarisma(size_t carisma)
{
    this->_carisma = carisma;
}

size_t Player::getForca()
{
    return _forca;
}

void Player::setForca(size_t forca)
{
    this->_forca = forca;
}

size_t Player::getAgilidade()
{
    return _agilidade;
}

void Player::setAgilidade(size_t agilidade)
{
    this->_agilidade = agilidade;
}

size_t Player::getPercepcao()
{
    return _percepcao;
}

void Player::setPercepcao(size_t percepcao)
{
    this->_percepcao = percepcao;
}
