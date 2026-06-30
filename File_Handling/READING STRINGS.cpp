#include<fstream>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string name,dob;
	ifstream reading;
//	opening file for reading
	reading.open("C:\\Users\\Khizar\\Desktop\\hi.txt");
	if(!reading)
	{
		cout<<"\nFile cannot be opened!";
	}
	else
	{	
		while(!reading.eof())
		{
			reading>>name>>dob;
			cout<<name<<"\t"<<dob<<endl;
		}
	}



	

}