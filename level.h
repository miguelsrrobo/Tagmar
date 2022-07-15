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

private slots:
    void on_pushButton_clicked();


private:
    Ui::Level *ui;
    BookMage *book;
    Inimigo *inimigo;
};

#endif // LEVEL_H
