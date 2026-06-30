// Square Pattern

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int i,j;
	int n=6;
	cout<<"Square Pattern:\n";
	cout<<"----------------\n\n";
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n+2;j++)
		{
			cout<<"*";	
		}
		cout<<"\n";
	}
	
}