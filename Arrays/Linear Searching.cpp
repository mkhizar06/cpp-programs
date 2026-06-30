#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	const int size = 7;
	int i,num;
	int list[size];
	bool found;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter number for index "<<i<<": ";
		cin>>list[i];
	}
	cout<<"\nEnter number you want to search: ";
	cin>>num;
	for(i=0;i<size;i++)
	{
		if(list[i]==num)
		{
			found = true;
			if(found == true)
			{
				num=i;
				cout<<"\nNumber is found at index "<<i<<"\n";
			}
		}
    }
    if(found!=true)
    {
    	cout<<"\nNumber not found!\n";
	}
	cout<<"\nArray: [ ";
    for(i=0;i<size;i++)
	{
		cout<<list[i]<<" ";
	}
	cout<<"]";
	return 0;
}