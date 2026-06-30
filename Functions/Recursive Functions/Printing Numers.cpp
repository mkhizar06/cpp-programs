#include<iostream>
#include<cmath>

using namespace std;

int printNum(int n)
{
	if (n==1)
	{
		return 1;
	}
	cout<<n<<"\t";
	
	return printNum(n-1);
}

int main()
{
	int a;
	cout<<"\nPrinting numbers fron n to 1\n";
	cout<<"\nEnter a number to start from: ";
	cin>>a;
	cout<<"\nNumbers Are:\n\n"<<printNum(a);
}