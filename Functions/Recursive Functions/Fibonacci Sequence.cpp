//Finding nth term in Fibonacci sequence

#include<iostream>
#include<cmath>

using namespace std;

int fibonacci(int n)
{
	if (n<2)
	{
		return 1;
	}
	
	return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
	int a;
	cout<<"\nEnter a number: ";
	cin>>a;
	cout<<"\nTerm in fibonacci sequence at position "<<a<<" = "<<fibonacci(a);
}