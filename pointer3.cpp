#include<iostream>
using namespace std;
int main(){

    double d=4.3;
    double *p2 =&d;
    cout<<"Value is: "<< p2 <<endl;
    cout<<"Address is: "<< *p2 <<endl;

    cout<<"Size of pointer is: "<< sizeof(d) <<endl;
    cout<<"Size of integer is: "<< sizeof(p2) <<endl;

    return 0;
}
