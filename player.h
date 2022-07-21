#ifndef PLAYER_H
#define PLAYER_H

#include <QPixmap>

class Player
{
public:
    Player();
    int setAtributos(size_t intelecto, size_t fisico, size_t aura, size_t carisma, size_t forca, size_t agilidade, size_t percepcao);
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

private:
    QString _nome, _raca, _proficao1, _proficao2;
    bool _deus;
    size_t _estagio;
    size_t _life = 0, _ataque = 0, _defesa = 5;
    size_t _intelecto = 0, _fisico = 0, _aura = 0, _carisma = 0, _forca = 0, _agilidade = 0, _percepcao = 0;
};

#endif // PLAYER_H
