#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();

    void setWidth(double w);
    void setHeight(double h);
    double getArea();
    double getCircum();
};

#endif // RECTANGLE_H
