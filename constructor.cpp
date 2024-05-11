#include<iostream>
using namespace std;

class Hero {
public:
    int health;

    Hero() {
        cout << "Constructor called " << endl;
    }
};

int main() {

    //object created statically
    cout<<"Hi"<<endl;
    Hero ramesh;
    cout<<"Hello"<<endl;


    //dynamically
    Hero *h= new Hero;
    return 0;
}
