#include<iostream>

using namespace std;

int main()
{
	int num;
	cout<<"Input a number[1 to 4]: ";
	cin>>num;
	switch(num)
	{
		case 1:
			cout<<"One";break;
		case 2:
			cout<<"Entered number is 'Two'";break;
		case 3:
			cout<<"Entered number is 'Three'";break;
		case 4:
			cout<<"Entered number is 'Four'";break;
		default:
			cout<<"The entered number is not in range";
	}
	
	return 0;
}