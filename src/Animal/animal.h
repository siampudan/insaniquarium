// animal.h
#ifndef ANIMAL_H
#define ANIMAL_H

#include "../Point/point.h"
class Animal{
    public:
        virtual void move(Point dest, double v) = 0;
        virtual void eat() = 0;
        virtual Point getLocation() = 0;
        virtual char* getTexture() = 0;
};
#endif // !ANIMAL_H

