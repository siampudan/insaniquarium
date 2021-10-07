// point.h
#ifndef POINT_H
#define POINT_H

class Point{
    private:
        double x;
        double y;
    public:
        Point();
        Point(double x, double y);
        ~Point();
        double getX();
        double getY();
        Point getDifference(Point otherPoint);
        void setX(const double x);
        void setY(const double y);
};

#endif // !POINT_H
