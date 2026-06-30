// Binary Searching program 

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	const int size=9;
	int arr[size];
	int loc,target;
	int start=0,end=size-1;
	bool found;
	int i;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter number for index "<<i<<": ";
		cin>>arr[i];
	}
	cout<<"\nEnter number you want to search: ";
	cin>>target;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(target>arr[mid])
		{
			start=mid+1;
		}
		else if(target<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			found=true;
			loc=mid;
		    cout<<"\nNumber is found at index "<<count<<endl;
		    break;
		}
	}
	if(!found)
	{
		cout<<"\nNumber not found!\n";
	} 
	
	return 0;	
}