#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	int num,sum;
	sum = 0;
	num = 1;
	while(num<=25)
	{
		sum=sum+num;
		num++;
	}
	cout<<"Sum = "<<sum;
	
	return 0;
}