#include<iostream>
using namespace std;
int main(){
    //int num =5;
    // cout<<num<<endl;

    // //address of operator - &
    // cout<<"Address of num is "<<&num <<endl;

    //int *ptr= & num;

    double d=4.3;
    double *p2 =&d;
    cout<<"Value is: "<< p2 <<endl;
    cout<<"Address is: "<< *p2 <<endl;

    return 0;
}