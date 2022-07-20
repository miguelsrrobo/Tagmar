#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cstdlib>
#include <string>
#include "level.h"
#include <QState>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int setdaita();
private slots:
    void on_pushButton_clicked();

    void on_racaBox_currentTextChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    Level *level;
    bool logado;
    size_t intelecto = 0, fisico = 0, aura = 0, carisma = 0, forca = 0, agilidade = 0, percepcao = 0;

};
#endif // MAINWINDOW_H
