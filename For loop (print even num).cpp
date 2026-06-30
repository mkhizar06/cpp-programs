#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int count;
	cout<<"Even Numbers between 1 and 100:\n";
	for(count = 2; count>1&&count<=100; count+=2)
	{
		cout<<"\n"<<count<<"\n";
	}
	
	return 0;
}