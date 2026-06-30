#include<iostream>
#include<conio.h>

using namespace std;

int sum(int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=i;
	}
	return sum;
}

int main()
{
	cout<<"Sum = "<<sum(10);
	cout<<"\nSum = "<<sum(100);
	cout<<"\nSum = "<<sum(1000);
}