#include<iostream>
using namespace std;

//Function signature
void printCounting(int n){
    //Function body
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;

    //Function call
    printCounting(n);

    return 0;
}