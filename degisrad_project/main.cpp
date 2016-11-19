#include "degisrad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Degisrad w;
    w.show();

    return a.exec();
}
