// Find the second largest element in a 1D array.
#include<iostream>
#include<iomanip>
#include<cmath>
#include<climits>

using namespace std;

int main()
{
	int i;
	int size=5;
	int largest1=INT_MIN;
	int largest2=INT_MIN;
	int scores[size]={150,250,350,274,455};
	cout<<"\nArray = [  ";
	for(i=0;i<size;i++)
	{
		cout<<scores[i]<<"  ";
	}
	cout<<"]\n";
	for(i=0;i<size;i++)
	{
		if(scores[i]>largest1)
		{
			largest1=scores[i];
		}		
	}
	for(i=0;i<size;i++)
	{
		if(scores[i]>largest2 && scores[i]!=largest1)
		{
			largest2=scores[i];
		}
    }   
	cout<<"\nLargest score = "<<largest1;
	cout<<"\n2nd Largest score = "<<largest2;
	
	return 0;
}