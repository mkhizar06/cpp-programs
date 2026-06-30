#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	const int Asize = 4;
	int i,sum,square;
	int list[Asize];
	sum = 0;
	for(i=0;i<Asize;i++)
	{
		cout<<"\nEnter value at index "<<i<<": ";
		cin>>list[i];
		square = list[i]*list[i];
		sum = sum + square;
	}
	cout<<"\nSum = "<<sum;
	
	return 0;
}