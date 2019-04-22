#include "mainwindow.h"
#include <QPainter>
#include "spiral.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    initSpiral();
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::SolidLine));
    painter.setBrush(QBrush(Qt::SolidPattern));

    std::vector<Point>::iterator it = points.begin();
    for (; it != points.end(); it++)
    {
        painter.drawPoint(it->x, it->y);
    }
    std::cout << "draw point" << std::endl;
}

void MainWindow::initSpiral()
{
    for (int i = 0; i < 60; i+=10)
    {
        double x, y, t;
        spiral(i, 0.0, 5.49, 0.0011, 2.0, 2.0,
                                    &x, &y, &t);
        Point pt;
        pt.x = x * 100;
        pt.y = y * 100;
        points.push_back(pt);
        std::cout << "x: " << x << " y: " << y << std::endl;
    }
    std::cout << "points size: " << points.size() << std::endl;
}
