#ifndef PIRANHA_H
#define PIRANHA_H

#include "animal.h"
#include "point.h"

class Piranha: public Animal{
    private:
        Point location;
        int id;
        int growth;
    public:
        Piranha();
        Piranha(Point init);
        ~Piranha();
        Point getLocation();
        void move(Point dest, double v);
        void eat();        
};

#endif // !PIRANHA_H
#define PIRANHA_H