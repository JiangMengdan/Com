#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include <QSettings>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

VOID MainWindow::init_com()
{
    QString commpath = "HKEY_LOCAL_MACHINE\\HARDWARE\\DEVICEMAP\\SERIALCOMM\\";
    QSettings* qsettings = new QSettings(commpath, QSettings::NativeFormat);
    QStringList key = qsettings->allKeys();
    QStringList com_list;
    for(UDWORD i = 0; i < key.size(); i++)
    {
        //com_list <<
    }
}

QString getCom(DWORD index, QString keyorvalue)
{

}
