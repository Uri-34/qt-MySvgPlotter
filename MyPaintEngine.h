#ifndef MYPAINTENGINE_H
#define MYPAINTENGINE_H

#include <QDebug>
#include <QPaintEngine>


class MyPaintEngine : public QPaintEngine
{

public:
    explicit MyPaintEngine();

    void drawEllipse(const QRectF &rect);
    void drawEllipse(const QRect &rect);

    void drawImage(const QRectF &rectangle, const QImage &image,
                   const QRectF &sr, Qt::ImageConversionFlags flags = Qt::AutoColor);

    void drawLines(const QLineF *lines, int lineCount);
    void drawLines(const QLine *lines, int lineCount);

    void drawPath(const QPainterPath &path);

    void drawPixmap(const QRectF &r, const QPixmap &pm, const QRectF &sr);


    void displayFigureList();

private:
    QStringList _listOfFigures;
};

#endif // MYPAINTENGINE_H
