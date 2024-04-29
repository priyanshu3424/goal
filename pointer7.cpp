#include<iostream>
using namespace std;
int main(){

    int arr[10];

    cout<<"Address of first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block is "<<&arr[0]<<endl;

    return 0;
    
}
