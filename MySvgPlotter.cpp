#include <QDebug>

#include <MySvgPlotter.h>
#include <MyPaintEngine.h>


MySvgPlotter::MySvgPlotter(const QString fileName, QWidget *parent)
    : QSvgWidget(fileName, parent)
{
    _p_renderer = renderer();
    _p_paintEngine = new MyPaintEngine();
}

MySvgPlotter::~MySvgPlotter()
{
}

void MySvgPlotter::paintEvent(QPaintEvent *paintEvent)
{
//    qDebug() << "Type Event :" << paintEvent->type();
    QSvgWidget::paintEvent(paintEvent);
}

