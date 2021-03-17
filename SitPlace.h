#ifndef SITATTHETABLE_H
#define SITATTHETABLE_H
#include <QWidget>
#include <QPainter>
#include <QDebug>

class SitPlace : public QWidget
{
    Q_OBJECT
public:
    SitPlace(QWidget *parent = nullptr);
    ~SitPlace();
    //void paint(QPainter& painter, QPaintEvent *event = nullptr);
private:


protected:
    void paintEvent(QPaintEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;
    /*void mouseReleaseEvent(QMouseEvent *event) override;*/

};

#endif // SITATTHETABLE_H
