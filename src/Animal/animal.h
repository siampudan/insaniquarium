// animal.h
#ifndef ANIMAL_H
#define ANIMAL_H

#include "point.h"
class Animal{
    public:
        virtual void move(Point dest) = 0;
        virtual void eat() = 0;
};
#endif // !ANIMAL_H

