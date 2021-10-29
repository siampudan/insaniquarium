#ifndef PIRANHA_H
#define PIRANHA_H

#include "../Animal/animal.h"
#include "../Point/point.h"
#include <SDL2/SDL.h>

class Piranha: public Animal{
    private:
        char* texture;
        Point location;
        int id;
        int growth;
    public:
        Piranha();
        Piranha(Point init);
        ~Piranha();
        Point getLocation();
        char* getTexture();
        void move(Point dest, double v);
        void eat();        
};

#endif // !PIRANHA_H
#define PIRANHA_H