// Write a program to swap two numbers using pointers.
#include<iostream>
#include<iomanip>
#include<cmath>
#include<climits>

using namespace std;

void swapping(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int num1,num2;
	cout<<"\nEnter 1st number: ";
	cin>>num1;
	cout<<"\nEnter 2nd number: ";
	cin>>num2;
	cout<<"\n\tValues after Swapping\n";
	swapping(&num1,&num2);
	cout<<"\nNum1 = "<<num1;
	cout<<"\nNum2 = "<<num2;
}