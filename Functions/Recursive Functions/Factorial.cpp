#include<iostream>
#include<cmath>

using namespace std;

int factorial(int n)
{
	if (n<=1)
	{
		return 1;
	}
	
	return n*factorial(n-1);
}

int main()
{
	int a;
	cout<<"\nEnter a number: ";
	cin>>a;
	cout<<"\nFactoial of "<<a<<" = "<<factorial(a);
}