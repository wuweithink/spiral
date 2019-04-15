#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPen>
#include <QBrush>
#include <vector>
#include <iostream>

class Point
{
public:
    double x;
    double y;
};
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    virtual void paintEvent(QPaintEvent *);

private:
    void initSpiral();

    std::vector<Point> points;
};

#endif // MAINWINDOW_H
