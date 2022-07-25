#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cstdlib>
#include <string>
#include "level.h"
#include <QState>
#include <QMessageBox>

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

    void on_spinBox_3_valueChanged(int arg1);

    void on_proficaoBox_currentTextChanged(const QString &arg1);

    void on_simDeusButton_clicked();

private:
    Ui::MainWindow *ui;
    Level *level;
    Player *player;
//    bool _logado;
//    QString _nome, _raca, _proficao1, _proficao2;
//    bool _deus;
//    size_t _estagio;
//    size_t _life = 0, _ataque = 0, _defesa = 0, _mana = 0;
//    size_t _intelecto = 0, _fisico = 0, _aura = 0, _carisma = 0, _forca = 0, _agilidade = 0, _percepcao = 0;
    void habilidade();
};
#endif // MAINWINDOW_H
