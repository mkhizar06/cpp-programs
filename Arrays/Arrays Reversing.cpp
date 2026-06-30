#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	int numbers[10]={2,4,6,8,10,12,14,16,18,20};
	int i;
	cout<<"\nOrigional array = { ";
	for(i=0;i<10;i++)
	{
		cout<<numbers[i]<<"  ";
	}
	cout<<"}\n";
    cout<<"\n";
    cout<<"Reversed array = { ";
    for(i=9;i>=0;i--)
    {
    	cout<<numbers[i]<<"  ";
	}
	cout<<"}\n";
	
	return 0;
}