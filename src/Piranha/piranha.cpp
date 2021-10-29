#include "./piranha.h"
#include "../Point/point.h"
#include "../Animal/animal.h"
#include <math.h>
#include <iostream>

Piranha::Piranha(){
    Point init(100,100);
    this->location = init;
    this->growth = 1;
    std::string fileName = "../assets/Animal/PiranhaNormal/piranha.png";
    this->texture = new char(fileName.length() + 1);
    this->texture = strcpy(this->texture, "../assets/Animal/PiranhaNormal/piranha.png");
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

char *Piranha::getTexture(){
    return this->texture;
}

void Piranha::move(Point dest, double v){
    Point diff = this->location.getDifference(dest);
    double dir = atan2(diff.getY(), diff.getX());

    double newX = this->location.getX() + v * cos(dir);
    double newY = this->location.getY() + v * sin(dir); 

    Point newLocation(newX, newY);
    this->location = newLocation;
}

void Piranha::eat(){}