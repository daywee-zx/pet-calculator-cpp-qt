#include "mainwindow.h"
#include <Calculator.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Calculator calc;
    MainWindow w(nullptr, &calc);
    w.show();

    return app.exec();
}
