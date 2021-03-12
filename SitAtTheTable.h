#ifndef SITATTHETABLE_H
#define SITATTHETABLE_H
#include <QWidget>
#include <QPainter>
#include <QDebug>

class SitAtTheTable : public QWidget
{
    Q_OBJECT
public:
    SitAtTheTable(const QPoint& pos, QWidget *parent = nullptr);
    ~SitAtTheTable();
    void paint(QPainter& painter, QPaintEvent *event = nullptr);
private:
    const QPoint* pos;
    QWidget *parent = nullptr;

protected:
    void paintEvent(QPaintEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;
    /*void mouseReleaseEvent(QMouseEvent *event) override;*/

};

#endif // SITATTHETABLE_H
