#include <QtGlobal>
#include "mainwindow.h"
#if QT_VERSION >= 0x050000
#include <QApplication>
#else
#include <QtGui/QApplication>
#endif
#include <QTextCodec>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
#if QT_VERSION >= 0x050000
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
#endif
    MainWindow w;
    w.show();
    return a.exec();
}
