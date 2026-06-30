#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	const int size = 4;
	int i,largest,position;
	largest = INT_MIN;
	int list[size];
	for(i=0;i<4;i++)
	{
		cout<<"\nEnter value at index "<<i<<": ";
		cin>>list[i];
		if(list[i]>largest)
		{
			largest = list[i];
			position=i;
		}
	}
	cout<<"\nArray = [";
	for(i=0;i<4;i++)
	{
		cout<<list[i]<<" ";
	}
	cout<<"]\n";
	cout<<"\nLargest = "<<largest;
	cout<<"\n\nIt is found at index "<<position;
	return 0;
}