#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int array[5]={-2,-1,1,2,3};
	int smallest=INT_MAX;  
	int largest=INT_MIN; 
	int i;
	cout<<"Array = [";
	for(i=0;i<5;i++)
	{
		cout<<array[i]<<",";
		smallest=min(array[i],smallest);   // using 'min' function to find smalleest element. 
		largest=max(array[i],largest);     // using 'max' function to find smalleest element. 
	}
	cout<<"]\n";
	cout<<"\nSmallest = "<<smallest<<"\n";
	cout<<"\nLargest = "<<largest;
}