#include <iostream> 
using namespace std; 

class PJ
{ 
string name; 
	
public: 
PJ(string name) 
{ 
	// Use this keyword to initialize value 
	// of class member name as the parameter 
	// name passed in the constructor. 
	this->name = name; 
} 
void display() 
{ 
	cout << name << endl; 
} 
}; 

int main() 
{ 
PJ abc("RamRam"); 
abc.display(); 
return 0; 
}
