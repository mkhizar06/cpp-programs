#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int sum,count;
	count = 1;
	sum = 0;
	do
	{
		sum = sum + count;
		count ++;
	}while(count>=1&&count<=100);
	cout<<"Sum of 1 to 100 natural numbers is "<<sum;
	
	return 0;
}