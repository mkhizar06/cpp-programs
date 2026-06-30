#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	int num,count,factorial;
	count = 1;
	factorial = 1;
	cout<<"Enter number: ";
	cin>>num;
	while(count<=num)
	{
		factorial = factorial * count;
		count++; 
	}
	cout<<"Factorial = "<<factorial;
	return 0;
}