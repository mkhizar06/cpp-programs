   // Selection Sorting Program 

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int i,j,temp,largest;
	const int size = 5;
	int n=size-1;
	int arr[size];
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter value at index "<<i<<": ";
		cin>>arr[i];
	}
	cout<<"\n--------------------------------------------\n";
	cout<<"\n Unsorted Array: [ ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"]\n";
	cout<<"\n--------------------------------------------\n";
	// Selection Sorting starts here
	for(i=0;i<n;i++)
	{
		largest=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]>arr[largest])
			{
				largest=j;
			}
		}
		temp=arr[largest];
		arr[largest]=arr[i];
		arr[i]=temp;
	}
	
	cout<<"\nSorted Array: [ ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"]\n";
	
	return 0;
}