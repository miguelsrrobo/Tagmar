#include "player.h"
#include <time.h>       /* time */
Player::Player()
{
    life = 100;

    defesa = 100;

    ataque = rand() % 100;
}
