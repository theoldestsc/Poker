#include "SitAtTheTable.h"
#include <QDebug>

SitAtTheTable::SitAtTheTable(const QPoint &pos, QWidget *parent)
    : QWidget(parent),
      pos(&pos),
      parent(parent)
{


}

SitAtTheTable::~SitAtTheTable()
{

}

void SitAtTheTable::paint(QPainter& painter, QPaintEvent *event)
{

    QRect sitButtonRect(*pos, QSize(40,20));
    painter.drawText(sitButtonRect, Qt::AlignCenter, QString("Place"));
    painter.fillRect(sitButtonRect,QColor(100,100,100,100));

}

void SitAtTheTable::paintEvent(QPaintEvent* event)
{

    Q_UNUSED(event);
    QPainter painter(parent);
    painter.begin(parent);
    /*int side = qMin(width(), height());
    if((width() - height()) / 2 > 0)
        painter.setViewport((width() - height()) / 2, (height() - side) / 2, side, side);
    else
        painter.setViewport(0, (height() - side) / 2, side, side);
    painter.setWindow(-100, -100, 200, 200);*/

    QRect sitButtonRect(*pos, QSize(40,20));
    painter.drawText(sitButtonRect, Qt::AlignCenter, QString("Place"));
    painter.fillRect(sitButtonRect,QColor(100,100,100,100));
    painter.end();
    qDebug()<<"Paint Event!!\n";
}

void SitAtTheTable::mousePressEvent(QMouseEvent *event)
{

}
