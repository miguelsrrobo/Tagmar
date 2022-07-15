#include "mainwindow.h"
#include <QSplashScreen>
#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen * teleSplash = new QSplashScreen;
    teleSplash->setPixmap(QPixmap(":/images/unnamed.png"));
    teleSplash->show();
    MainWindow w;
    QTimer::singleShot(2000,teleSplash,SLOT(close()));
    QTimer::singleShot(2000,&w,SLOT(show()));
//    w.show();
    return a.exec();
}
