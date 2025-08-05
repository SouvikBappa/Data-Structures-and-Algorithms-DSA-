#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
    void breathe() {
        cout << "Breathing..." << endl;
    }
};

class Bird : public Animal {
public:
    void fly() {
        cout << "Flying..." << endl;
    }
};

class Fish : public Animal {
public:
    void swim() {
        cout << "Swimming..." << endl;
    }
};

class Mammal : public Animal {
public:
    void walk() {
        cout << "Walking..." << endl;
    }
};

int main() {
    Bird b;
    Fish f;
    Mammal m;

    b.eat();
    b.fly();

    f.breathe();
    f.swim();

    m.eat();
    m.walk();

    return 0;
}
