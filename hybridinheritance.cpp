#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating" << endl;
    }
};

class Bird {
public:
    void fly() {
        cout << "Flying" << endl;
    }
};

// Derived class inheriting from both Animal and Bird (Hybrid Inheritance)
class Bat : public Animal, public Bird {
public:
    void sleep() {
        cout << "Sleeping" << endl;
    }
};

int main() {

    Bat bat;
    bat.eat();
    bat.fly();
    bat.sleep();

    return 0;
}
