#ifndef INIMIGO_H
#define INIMIGO_H

#include <vector>
#include <utility>
#include <string>

class Inimigo
{
private:
    float life, ataque, defesa;
    std::vector<std::pair<std::string, size_t> > m_inimigo;
public:
    Inimigo();
};

#endif // INIMIGO_H
