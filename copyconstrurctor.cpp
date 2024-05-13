#include<iostream>
using namespace std;

class Hero{

    //properties
    private:
    int health;

    public:
    char level;

    Hero(){
        cout<<"Simple constructor called"<<endl;
    }

    //parameterised constructor
    Hero(int health){
        this ->health =health;
    }
    Hero (int health,char level){
        this->level=level;
        this->health=health;
    }

    //copy constructor
    Hero(Hero& temp){
        cout<<"Copy constructor called" <<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    void print(){
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level=ch;
    }
};

int main(){

    Hero S(70,'A');
    S.print();

    //copy constructor 
    Hero R(S);
    R.print();
}