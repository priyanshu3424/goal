#include <iostream>
using namespace std;

class Test {
public:
	// User-Defined Constructor
	Test() { cout << "Constructor called"<<endl;
    };

	// User-Defined Destructor
	~Test() { cout << "Destructor called"; }
};

int main()
{
	Test t;
	return 0;
}
