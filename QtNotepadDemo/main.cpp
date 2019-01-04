/**********************************************************
NotePadQt
VERSION: 1.0

Description: It is a simple notepad developed with C++ Qt.
Developer: Nicolas CHEN
***********************************************************/

#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/rec/img/codecode.jpg"));
    splash->show();

    MainWindow w;

    QTimer::singleShot(3000, splash, SLOT(close()));
    QTimer::singleShot(3000, &w, SLOT(show()));

    //w.show();

    return a.exec();
}
