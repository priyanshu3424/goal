#include<iostream>
using namespace std;

class MyClass {
public:
    static int myStaticVariable;
};

int MyClass::myStaticVariable = 0;

int main() {
    MyClass obj1;
    MyClass obj2;

    MyClass::myStaticVariable = 5;

    cout << obj2.myStaticVariable; 

    return 0;
}
