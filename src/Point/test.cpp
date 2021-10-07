#include "point.h"
#include <iostream>
using namespace std;


int main(){
    Point* p = new Point(0,0);
    cout << p->getX() << endl;
    cout << p->getY() << endl;
    p->setY(5);
    p->setX(4);
    cout << p->getX() << endl;
    cout << p->getY() << endl;
}