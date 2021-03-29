#include "PokerTable.h"
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*QWidget* main = new QWidget;
    QVBoxLayout* lay = new QVBoxLayout(main);
    PokerTable* w = new PokerTable(main);
    lay->addWidget(w);*/


    PokerTable* w = new PokerTable();
    w->show();
    return a.exec();
}
