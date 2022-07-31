#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cstdlib>
#include <string>
#include "level.h"
//#include <QState>
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
    QString GetRaca();
    QString GetClasse();
    QString GetNome();
    QString GetProficao2();
    bool GetDeus();
    size_t GetEstagio();
    size_t GetLife();
    size_t GetAtaque();
    size_t GetDefesa();
    size_t GetMana();
    size_t GetIntelecto();
    size_t GetFisico();
    size_t GetAura();
    size_t GetCarisma();
    size_t GetForca();
    size_t GetAgilidade();
    size_t GetPercepcao();

private slots:
    void on_pushButton_clicked();

    void on_racaBox_currentTextChanged(const QString &arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_proficaoBox_currentTextChanged(const QString &arg1);

    void on_simDeusButton_clicked();

private:
    Ui::MainWindow *ui;
    Level *level;
//    Player *player;
    bool raca,_deus;
    void habilidade();
    size_t _estagio;
    size_t _life, _ataque = 0, _defesa = 0, _mana;
    size_t _intelecto = 0, _fisico = 0, _aura = 0, _carisma = 0, _forca = 0, _agilidade = 0, _percepcao = 0;

    //Inicio

    //Fim


};
#endif // MAINWINDOW_H
