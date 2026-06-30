#include<iostream>
#include<cmath>


int main()
{
	int n,m;
	bool prime = true;
	std::cout << "Enter a number: ";
	std::cin >> n;
	for (int i = 2; i < n; ++i)
	{
		{
			if (n%i==0)
			{
				prime = false;
				break;
			}
		}
	}
	if (prime)
	{
		std::cout << n << " is a Prime number";
	}
	else
	{
		std::cout << n << " is not a Prime number";
	}

	return 0;
}