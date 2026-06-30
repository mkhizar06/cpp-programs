#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>

using namespace std;

int main()
{
	int num;
	num = 2;
	cout<<"Numbers:\n";
	while(num>=2&&num<=100)
	{
		cout<<"\n"<<num<<"\n";
		num=num+2;
	}
	
	return 0;
}