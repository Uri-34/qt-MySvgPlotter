#include <MyPaintEngine.h>


MyPaintEngine::MyPaintEngine() : QPaintEngine()
{
}

void MyPaintEngine::drawEllipse(const QRectF &rect)
{
    _listOfFigures.append(QString("ellipce : [x=%1, y=%2, height=%3, width=%4]").arg(rect.x())
                                                                                .arg(rect.y())
                                                                                .arg(rect.height())
                                                                                .arg(rect.width())
                         );
    QPaintEngine::drawEllipse(rect);
}

void MyPaintEngine::drawEllipse(const QRect &rect)
{
    drawEllipse((QRectF)rect);
}

void MyPaintEngine::drawImage(const QRectF &rectangle, const QImage &image, const QRectF &sr, Qt::ImageConversionFlags flags)
{
    // ???
    QPaintEngine::drawImage(rectangle, image, sr, flags);
}

void MyPaintEngine::drawLines(const QLineF *lines, int lineCount)
{
    for(int count = 0; count < lineCount; count++)
    {
        _listOfFigures.append(QString("line : [x1=%1, y1=%2, x2=%3, y2=%4]/n").arg(lines[count].x1())
                                                                              .arg(lines[count].y1())
                                                                              .arg(lines[count].x2())
                                                                              .arg(lines[count].y2())
                             );
    }
    QPaintEngine::drawLines(lines, lineCount);
}

void MyPaintEngine::drawLines(const QLine *lines, int lineCount)
{
    drawLines((QLineF*)lines, lineCount);
}

void MyPaintEngine::drawPath(const QPainterPath &path)
{
//    _stringListOfPrimitives.append(QString("path : [x1=%1, y1=%2, x2=%3, y2=%4]/n").arg(path.)
//                                  );
    QPaintEngine::drawPath(path);
}

void MyPaintEngine::drawPixmap(const QRectF &r, const QPixmap &pm, const QRectF &sr)
{
    Q_UNUSED(r);
    Q_UNUSED(pm);
    Q_UNUSED(sr);
}

