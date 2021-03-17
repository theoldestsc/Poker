#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QLine>
#include "SitPlace.h"



class PokerTable : public QWidget
{
    Q_OBJECT

public:
    PokerTable(QWidget *parent = nullptr);
    ~PokerTable();
private:
    SitPlace* sitAtTheTableButton;

protected:
    void paintEvent(QPaintEvent *event) override;

};
#endif // WIDGET_H
