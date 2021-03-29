#include "PokerTable.h"
#include <QDebug>


PokerTable::PokerTable(QWidget *parent)
    : QWidget(parent),
      sitAtTheTableButton(new SitPlace(this))
{
//    sitAtTheTableButton->setGeometry(0,0,50,30);
    //sitAtTheTableButton->move(150,150);

    sitAtTheTableButton->move(window()->geometry().center());

    qDebug() << "\tGeometry PokerTableClass: " << this->geometry() << "\n"
             << "\tGeometry SitPlaceClass: " << sitAtTheTableButton->geometry() << "\n"
             << "\tWindowGeometry: " << frameGeometry() << "\n\n";
}

void PokerTable::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    int side = qMin(width(), height());
    if((width() - height())  > 0)
        painter.setViewport((width() - height()) / 2, (height() - side) / 2, side, side);
    else
        painter.setViewport(0, (height() - side) / 2, side, side);
    painter.setWindow(-100, -100, 200, 200);

    QBrush brushPokerTable(QColor(8,115,83));
    QPen penEdgeOfTable(QColor(85,110,107), 10);
    QPen penPokerTableCardArea(QColor(146,170,70), 1);
    QPen penShadows(QColor(63, 63, 63, 200), 2);

    QRect table(QPoint(-100, -50), QPoint(100,50));
    QRect rectCardArea(QPoint(-80, -30), QPoint(80,30));
    QRect rectEdgeOfTable(QPoint(-100, -50), QPoint(100,50));
    QRect rectOfShadows(QPoint(-96, -45), QPoint(96,45));

    painter.setBrush(brushPokerTable);
    painter.drawRoundedRect(table,30,30); //TODO:Calculate Rounder

    painter.setPen(penEdgeOfTable);
    painter.drawRoundedRect(rectEdgeOfTable,30,30);

    painter.setPen(penShadows);
    painter.drawRoundedRect(rectOfShadows,30,30);

    painter.setPen(penPokerTableCardArea);
    painter.drawRoundedRect(rectCardArea,15,15);

 //  sitAtTheTableButton->move(this->geometry().center());
    /*qDebug() << "\tGeometry PokerTableClass: " << this->geometry() << "\n"
          << "\tGeometry SitPlaceClass: " << sitAtTheTableButton->geometry() << "\n"
          << "\tWindowGeometry: " << frameGeometry() << "\n\n";
    QWidget::paintEvent(event);*/

}

PokerTable::~PokerTable()
{
}

