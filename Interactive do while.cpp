#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int count,sum,num,total_num;
	count = 1;
	sum = 0;
	cout<<"Enter total numbers to be added: ";
	cin>>total_num;
	do
	{
		cout<<"\nEnter the number: ";
		cin>>num;
		sum = sum + num;
		count++;
	}while(count<=total_num);
	cout<<"\nSum of "<<total_num<<" numbers is: "<<sum;
	
	return 0;
}