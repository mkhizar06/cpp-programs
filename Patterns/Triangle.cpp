// Triangle Pattern

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int i,j;
	int n=10;
	cout<<"Triangular Pattern:\n";
	cout<<"----------------\n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			cout<<"*";	
		}
		cout<<"\n";
	}
	/* Number Triangular
	int i,j;
	int n=10;
	cout<<"Triangular Pattern:\n";
	cout<<"----------------\n\n";
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<i+1;j++)
		{
			cout<<i+1;	
		}
		cout<<"\n";
	} */
}