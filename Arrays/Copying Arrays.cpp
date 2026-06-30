#include<iostream>

using namespace std;

int main()
{
	const int size=3;
	int arr1[size],arr2[size];
	int i,j;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter value for array 1 at index "<<i<<": ";
		cin>>arr1[i];
		arr2[i]=arr1[i];
	}
	cout<<"\nArray1: [ ";
	for(i=0;i<size;i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<"]\n";
	cout<<"\nArray2 (Copied): [ ";
	for(i=0;i<size;i++)
	{
		cout<<arr2[i]<<" ";
	}
	cout<<"]\n";
}