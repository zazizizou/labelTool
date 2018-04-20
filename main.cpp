#include "labeltool.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LabelTool w;
    w.show();

    return a.exec();
}
