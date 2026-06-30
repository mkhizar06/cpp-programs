#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int num,smallest,i;
	smallest = INT_MAX;
	i=1;
	while(i<=3)
	{
		cout<<"Enter the number: ";
		cin>>num;
		i++;
		if(num<smallest)
		{
			smallest = num;
	    }
	}
	cout<<"Smallest number = "<<smallest;
	
	return 0;
	
}