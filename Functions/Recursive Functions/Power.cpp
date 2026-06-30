#include<iostream>
#include<cmath>

using namespace std;

int power(int x,int y)
{
	if (y==0)
	{
		return 1;
	}
	
	return x*power(x,y-1);
}

int main()
{
	int a,b;
	cout<<"\nEnter number: ";
	cin>>a;
	cout<<"\nEnter power: ";
	cin>>b;
	cout<<"\n"<<a<<" Raised to Power "<<b<<" = "<<power(a,b);
}