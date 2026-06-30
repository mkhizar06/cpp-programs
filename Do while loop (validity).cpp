#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	int num;
	cout<<"Enter a number [1 to 10]: ";
	cin>>num;
	do
	{
		if(num>=1 && num<=10)
		{
			cout<<"Entered number is "<<num;
			break;
		}
		else
		{
			cout<<"\nWrong input!\n";
			cout<<"\nEnter a number [1 to 10]: ";
        	cin>>num;
		}
		
	}while(1);
	
	return 0;
}