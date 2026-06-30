#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	int num,power,count,ans;
	count = 1;
	ans = 1;
	cout<<"Enter the number: ";
	cin>>num;
	cout<<"Enter power of number: ";
	cin>>power;
	while(count<=power)
	{
		ans = ans*num;;
		count++;
	}
	cout<<"Answer = "<<ans;
	
	return 0;
}