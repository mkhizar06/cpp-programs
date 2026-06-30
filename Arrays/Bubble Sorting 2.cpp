/* Bubble Sorting Program
  ii) descending order     */

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	const int size=8;
	int n=size-1;
	int i,j,temp;
	int arr[size];
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter number for index "<<i<<": ";
		cin>>arr[i];
	}
	cout<<"\n--------------------------------------\n";
	cout<<"\nUnsorted Array: [ ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"]\n";
	// Sorting code starts here.
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	// with using swap function.
	/* for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}   */
	cout<<"\n-----------------------------------------\n";
	cout<<"\nSorted Array: [ ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"]\n";
	
	return 0;
}