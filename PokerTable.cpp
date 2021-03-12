#include "PokerTable.h"
#include <QDebug>


PokerTable::PokerTable(QWidget *parent)
    : QWidget(parent)
{

      p = new QPoint(-50, 50);
      d = new SitAtTheTable(*p, parent);


}

void PokerTable::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event);
    QPainter painter;
    painter.begin(this);
    int side = qMin(width(), height());
    if((width() - height()) / 2 > 0)
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


//        d->show();



    /*QRect sit(QPoint(-100, -50), QPoint(-90,-40));
    painter.drawRect(sit);*/
    /*int width_button = chairsVec[0]->width();
    chairsVec[0]->move(-100, -50);
    chairsVec[1]->move(table.width()-80-width_button/2, table.bottom()+20);

    chairsVec[2]->move(table.right()+20-width_button/2, table.center().y()-100);
    chairsVec[3]->move(table.right()+40-width_button/2, table.center().y());
    chairsVec[4]->move(table.right()+20-width_button/2, table.center().y()+100);

    chairsVec[5]->move(table.left()-20-width_button/2, table.center().y()-100);
    chairsVec[6]->move(table.left()-40-width_button/2, table.center().y());
    chairsVec[7]->move(table.left()-20-width_button/2, table.center().y()+100);*/
}

PokerTable::~PokerTable()
{
}

