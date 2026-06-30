#include<iostream>
#include<cmath>

// isdigit() fucntion is used to check if a character is a digit or not.

using namespace std;

int main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	switch(ch)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			cout<<"Entered character is a Vowel.";break;
		default:
			if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '^' || ch == '$' || ch == '#' || ch == '@' || ch == '!' || ch =='=' || ch == '_' )
			{
			    cout<<"Invalid input!";
		    }
			else if(isdigit(ch))
			{
				cout<<"Invalid input!";	
		    }
		    else
			{
				cout<<"Entered character is not a vowel!";
			}
			
	}
	
	return 0;
}