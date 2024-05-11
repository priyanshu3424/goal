#include<iostream>
using namespace std;

class Hero{

    //properties
    public:
    int health;

    private:
    char level;

    void print(){
        cout<< level <<endl;
    }
};

int main(){
    //creation of object
    Hero ramesh;

    ramesh.health=70;

    cout<<"Health is: "<<ramesh.health <<endl;
    //cout<<"level is: "<<ramesh.level<<endl;

    return 0;
}