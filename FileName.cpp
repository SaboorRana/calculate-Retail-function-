#include<iostream>
using namespace std;

double calculateRetail(double, int);

int main()
{

	
	cout << calculateRetail(5.00,100) << endl;
	cout << calculateRetail(-5.00, 50)<<endl;





	return 0;

}
double calculateRetail(double cost, int markup)
{
	double result=0;
	double retail=0;
	
	if (cost < 0 || markup < 0)
	{
		cout << "Please input non-negative number"<<'\t';
		
	}
	else
		
		{
			result = cost * markup / 100;
			retail = result + cost;
		}
	return retail;
}































