#ifndef PLAYER_H
#define PLAYER_H

#include <QPixmap>

class Player
{
public:
    Player();
    float life = 0, ataque = 0, defesa = 5;
private:
    QString raca = 0x00;
};

#endif // PLAYER_H
