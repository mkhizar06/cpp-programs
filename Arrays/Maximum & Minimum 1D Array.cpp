#include<iostream>
#include<iomanip>
#include<cmath>
#include<climits>

using namespace std;

int main()
{
	int maximum=INT_MIN;
	int minimum=INT_MAX;
	int i;
	const int size=5;
	int scores[size]={150,250,350,274,455};
	cout<<"\nArray = [  ";
	for(i=0;i<size;i++)
	{
		cout<<scores[i]<<"  ";
	}
	cout<<"]\n";
	for(i=0;i<size;i++)
	{
		if(scores[i]>maximum)
		{
			maximum=scores[i];
		}
		if(scores[i]<minimum)
		{
			minimum=scores[i];
		}
	}
	cout<<"\nMaximum score in the array is "<<maximum;
	cout<<"\nMinimum score in the array is "<<minimum;
	
	return 0;
}