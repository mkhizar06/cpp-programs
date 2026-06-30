#include<iostream>

using namespace std;

int main()
{
	int age;
	char healthy,theory,practical;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your health status [H/UH]: ";
	cin>>healthy;
	cout<<"Enter theoretical test status[P/F]: ";
	cin>>theory;
	cout<<"Enter your practical test status[P/F]: ";
	cin>>practical;
	if(age>=18 && healthy == 'H' && theory == 'P' && practical == 'P' )
	{
		cout<<"Congrats! You will receive driving license within 10 days.";
    }
    else
    {
    	cout<<"Sorry! You are not eligible.";
	}
	
	return 0;
}