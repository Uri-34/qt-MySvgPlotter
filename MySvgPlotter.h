#ifndef MYSVGPLOTTER_H
#define MYSVGPLOTTER_H

#include <QSvgWidget>
#include <QSvgRenderer>
#include <QPaintEvent>

#include <MyPaintEngine.h>


class MySvgPlotter : public QSvgWidget
{
    Q_OBJECT

public:
    explicit MySvgPlotter(const QString fileName, QWidget *parent = nullptr);
    ~MySvgPlotter();

    virtual void paintEvent(QPaintEvent *event);

private:
    QSvgRenderer *_p_renderer = nullptr;
    MyPaintEngine *_p_paintEngine = nullptr;
//    QPainter *_p_painter = nullptr;
//    QPaintEngine *_p_engine = nullptr;
//    QPaintDevice *_p_device = nullptr;
};
#endif // MYSVGPLOTTER_H
