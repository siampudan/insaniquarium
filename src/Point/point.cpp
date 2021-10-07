#include "point.h"

Point::Point(){}

Point::Point(double x, double y){
    this->x = x;
    this->y = y;
};

Point::~Point(){
    this->x = 0;
    this->y=0;
};

double Point::getX(){
    return this->x;
};

double Point::getY(){
    return this->y;
};

void Point::setX(const double x){
    this->x = x;
};

void Point::setY(const double y){
    this->y = y;
};

Point Point::getDifference(Point otherPoint){
    double y1 = this->getY();
    double x1 = this->getX();
    double y2 = otherPoint.getY();
    double x2 = otherPoint.getX();

    return Point(y2 - y1, x2 - x1);
}

