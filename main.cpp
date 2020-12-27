#include <QApplication>

#include <MySvgPlotter.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MySvgPlotter w(":Петя.svg");
    w.show();
    return a.exec();
}
