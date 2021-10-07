#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void move() = 0;
};

class Fish : public Animal{
    public:
        Fish(){
            count++;
        }
        ~Fish(){}
        void move(){
            cout << "Hi. I'm move" << endl;
        }
        static int count;
};

class Guppy : public Fish {
    public:
        void move(){
            cout << "Hi. I'm move too" << endl;
        }
};

int Fish::count;
int main(){
    Fish* c = new Fish();
    Fish* b = new Fish();
    cout << Fish::count << endl;
}