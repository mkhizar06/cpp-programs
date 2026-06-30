// Reverse the elements of a 1D array without using an extra array.
#include<iostream>
#include<iomanip>
#include<cmath>
#include<climits>

using namespace std;

int main()
{
	int i;
	const int size=5;
	int scores[size]={150,250,350,274,455};
	cout<<"\nArray = [  ";
	for(i=size-1;i>=0;i--)
	{
		cout<<scores[i]<<"  ";
	}
	cout<<"]\n";
	
	return 0;
}