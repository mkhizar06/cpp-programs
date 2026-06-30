#include<iostream>
#include<cmath>

/* fmod(function) is used to evaluate floating numbers on modulus(%) operator */

using namespace std;

int main()
{
	float num1,num2;
	char arithmetic_operator;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	cout<<"Enter the operator [*,/,%,+ or -]: ";
	cin>>arithmetic_operator;
	switch(arithmetic_operator)
	{
		case '*':
			cout<<"Product = "<<num1*num2;break;
			
		case '/':
			if(num2!=0)
			{
				cout<<"Division = "<<num1/num2;
			}
			else
			{
				cout<<"Indivisible!";
			}
			break;
			
		case '%':
			fmod(num1,num2);
			cout<<"Remainder = "<<fmod(num1,num2);break;
			
		case '+':
				cout<<"Sum = "<<num1+num2;break;
				
		case '-':
			cout<<"Difference = "<<num1-num2;break;
			
			default:
				cout<<"Invalid operator!";
	}
	
	return 0;
}