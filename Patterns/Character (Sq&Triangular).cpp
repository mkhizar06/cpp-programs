#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int i,j;
	int n=5;
	char ch='A';
	cout<<"Square Pattern:\n";
	cout<<"--------------------\n\n";
	// for square pattern
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n+1;j++)
		{
			cout<<ch;
			ch+=1;	
		}
		cout<<"\n";
	}
	// for triangle
	cout<<"\nTriangular Pattern:\n";
	cout<<"--------------------\n\n";
	ch='A';
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			cout<<ch;
			ch++;	
		}
		cout<<"\n";
	}
}