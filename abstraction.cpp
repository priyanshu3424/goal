#include<iostream>
using namespace std;

class Vehicle
{
private:
		void Owner()
		{
			cout<<"Priyanshu\n";
		}
	public:
		void company()
		{
			cout<<"BMW\n";
		}
		void model()
		{
			cout<<"X5\n";
		}
		void color()
		{
			cout<<"Grey\n";
		}
		void cost()
		{
			cout<<"Rs.1.00 Cr. to 1.30 Cr.\n";
		}
		void oil()
		{
			cout<<"Petrol\n";
		}
};
int main()
{
	Vehicle obj;
	obj.company();
	obj.model();
	obj.color();
	obj.cost();
	obj.oil();
}
