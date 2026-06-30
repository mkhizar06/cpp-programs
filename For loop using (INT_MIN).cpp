#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int num,largest,i;
	largest = INT_MIN;
	for(i=1;i<=5;i++)
	{
		cout<<"Enter a number: ";
		cin>>num;
		if(num>largest)
		{
			largest = num;
		}
	}
	cout<<"Largest Number = "<<largest;
	
	return 0;
	
}