#ifndef MAPA_H
#define MAPA_H

#include <QMainWindow>

namespace Ui {
class Mapa;
}

class Mapa : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mapa(QWidget *parent = nullptr);
    ~Mapa();

private:
    Ui::Mapa *ui;
};

#endif // MAPA_H
