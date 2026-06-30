   // Selection Sorting Program 

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int i,j,temp,smallest;
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
	// Selection Sorting starts here (using swap function)
	 for(i=0;i<n;i++)
	{
		smallest=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[smallest])
			{
				smallest=j;
			}
		}
		swap(arr[i],arr[smallest]);
	} 
	
	/*for(i=0;i<n;i++)
	{
		smallest=i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[smallest])
			{
				smallest=j;
			}
		}
		temp=arr[smallest];
		arr[smallest]=arr[i];
		arr[i]=temp;
	} */
	
	cout<<"\nSorted Array: [ ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"]\n";
	
	return 0;
}