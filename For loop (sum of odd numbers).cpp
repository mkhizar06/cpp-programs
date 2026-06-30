#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int count,sum;
	cout<<"Sum of odd numbers between 1 and 100 = ";
	for(count = 1,sum = 0; count>=1&&count<100; count+=2)
	{
		sum += count;
	}
	cout<<sum;
	
	return 0;
}