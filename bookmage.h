#ifndef BOOKMAGE_H
#define BOOKMAGE_H

#include <QMainWindow>
#include <utility>
#include <string>

namespace Ui {
class BookMage;
}

class BookMage : public QMainWindow
{
    Q_OBJECT

public:
    explicit BookMage(QWidget *parent = nullptr);
    int mageName();
    ~BookMage();

private slots:

    void on_pushButton_clicked();

private:
    Ui::BookMage *ui;
    int m_mageId;
signals:
    void sinal1();
};

#endif // BOOKMAGE_H
