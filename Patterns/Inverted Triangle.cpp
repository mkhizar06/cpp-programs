#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int i,j;
	int n=10;
	cout<<"Inverted Triangular Pattern:\n";
	cout<<"----------------\n\n";
	for(i=n;i>=0;i--)
	{
		for(j=i+1;j>0;j--)
		{
			cout<<"*";	
		}
		cout<<"\n";
	}

}