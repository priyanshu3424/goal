/*#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    if (a-z){
        cout<<"This is lowercase"<< endl;
    }
    else if (A-Z){
        cout<<"This is uppercase"<<endl;
    }
    else if(0-9){
        cout<<"This is numeric"<<endl;
    }
}*/

#include<iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    if (islower(a)) {
        cout << "This is lowercase" << endl;
    }
    else if (isupper(a)) {
        cout << "This is uppercase" << endl;
    }
    else if (isdigit(a)) {
        cout << "This is numeric" << endl;
    }

}