#include "PokerTable.h"
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget main;
    PokerTable* w = new PokerTable();
//    QVBoxLayout* lay = new QVBoxLayout();

//    lay->addWidget(w);
//    SitPlace* d = new SitPlace();
//    lay->addWidget(d);
//    main.setLayout(lay);
//    main.show();
    w->show();
    return a.exec();
}
