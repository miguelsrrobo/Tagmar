#ifndef INIMIGO_H
#define INIMIGO_H

#include <vector>
#include <utility>
#include <string>

class Inimigo
{
private:
//    float life, ataque, defesa;
    std::vector<std::pair<std::string, size_t> > m_inimigo;
public:
    float life = 20, ataque = 2, defesa = 5;
    Inimigo();
};

#endif // INIMIGO_H
