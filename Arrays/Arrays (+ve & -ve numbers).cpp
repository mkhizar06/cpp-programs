#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	const int Asize = 8;
	int i,positive_num,negative_num;
	positive_num = 0;
	negative_num = 0;
	int list[Asize];
	for(i=0;i<Asize;i++)
	{
		cout<<"\nEnter value at index "<<i<<": ";
		cin>>list[i];
		if(list[i]>=0)
		{
			positive_num++;
		}
		else if(list[i]<0)
		{
			negative_num++;
		}
	}
	cout<<"\nThere are "<<positive_num<<" positive numbers and "<<negative_num<<" negative numbers in the list.";
	
	return 0;
}