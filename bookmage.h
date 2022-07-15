#ifndef BOOKMAGE_H
#define BOOKMAGE_H

#include <QMainWindow>

namespace Ui {
class BookMage;
}

class BookMage : public QMainWindow
{
    Q_OBJECT

public:
    explicit BookMage(QWidget *parent = nullptr);
    ~BookMage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BookMage *ui;
};

#endif // BOOKMAGE_H
