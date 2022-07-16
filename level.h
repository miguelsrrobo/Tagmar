#ifndef LEVEL_H
#define LEVEL_H

#include <QMainWindow>
#include <QPixmap>
#include "bookmage.h"
#include <cstdlib>
#include "bookmage.h"
#include "inimigo.h"

namespace Ui {
class Level;
}

class Level : public QMainWindow
{
    Q_OBJECT

public:
    explicit Level(QWidget *parent = nullptr);
    ~Level();

    void BbookMmage();
    void parteUm();
    void parteDois();
    void parteTres();
    void parteQuatro();

private slots:
    void on_direita_clicked();

private:
    Ui::Level *ui;
    BookMage *book;
    Inimigo *inimigo;
    size_t m_danoTotal;
    QString mageId;
};

#endif // LEVEL_H
