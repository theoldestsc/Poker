#include "SitPlace.h"
#include <QMouseEvent>


SitPlace::SitPlace(QWidget *parent):QWidget(parent)
{
    this->setGeometry(0,0,50,30);
}

SitPlace::~SitPlace()
{

}

/*void SitPlace::paint(QPainter& painter, QPaintEvent *event)
{

    QRect sitButtonRect(QPoint(-40,20), QSize(40,20));
    painter.drawText(sitButtonRect, Qt::AlignCenter, QString("Place"));
    painter.fillRect(sitButtonRect,QColor(100,100,100,100));
    move(-40,20);


}*/

void SitPlace::paintEvent(QPaintEvent* event)
{

    Q_UNUSED(event);
    QPainter painter(this);
    QObject* p = parent();
    QWidget* parent = qobject_cast<QWidget*>(p);
    //painter.begin(parent);
    //int side = qMin(parent->width(), parent->height());
    /*if((parent->width() - parent->height()) / 2 > 0)
        painter.setViewport((parent->width()/2 - parent->height()/2) / 2, (parent->height()/2 - side) / 2, side, side);
    else*/
        //painter.setViewport(0, (parent->height() - side) / 2, side, side);
    //painter.setViewport((parent->width()/2 - parent->height()/2) / 2, (parent->height()/2 - side) / 2, side, side);
    //painter.setWindow(0, 0, 40, 60);

    QRect sitButtonRect(QPoint(10,10), QPoint(50,30));
    painter.drawText(sitButtonRect, Qt::AlignCenter, QString("Place"));
    painter.fillRect(sitButtonRect,QColor(100,100,100,100));

}

void SitPlace::mousePressEvent(QMouseEvent *event)
{
    int x = event->x();
    int y = event->y();
    qDebug() << x << " " << y;
    qDebug()<<"mousePressEvent\n";
}
