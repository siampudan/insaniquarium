#include "piranha.h"
#include "animal.h"
#include <math.h>

Piranha::Piranha(){
    Point init(0,0);
    this->location = init;
    this->growth = 1;
};

Piranha::Piranha(Point init){
    this->location = init;
    this->growth = 1;
}

Piranha::~Piranha(){
    Point init(-1,-1);
    this->location = init;
    this->growth = 1;
}

Point Piranha::getLocation(){
    return this->location;
}

void Piranha::move(Point dest, double v){
    Point diff = this->location.getDifference(dest);
    double dir = atan2(diff.getY(), diff.getX());

    double newX = this->location.getX() + v * cos(dir);
    double newY = this->location.getY() + v * sin(dir); 

    Point newLocation(newX, newY);
    this->location = newLocation;
}