#include "mainwindow.h"
#include <QApplication>
#include <QAbstractScrollArea>
#include <QStyleFactory>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QApplication::setStyle(QStyleFactory::create("Fusion"));
    w.showMaximized();
     QIcon icon("icon.png");
      w.setWindowIcon(icon);
    return a.exec();
}
