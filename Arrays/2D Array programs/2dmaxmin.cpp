#include<iostream>
using namespace std;
int main()
{
	int array[4][5]={ {16,22,99,4,18},
	                  {-258,41,101,5,98},       
					  {105,6,15,2,45},    
					  {33,88,72,16,3}
					};
	int Min,Max;
	
	cout<<"arrays in list==>"<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
		cout<<array[i][j]<<"\t";
		}
	cout<<endl;
	}
	
	Min=2147483647;// assign maximum value of int to Min
	Max=-2147483646;//assign minimum value of int to Max
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(array[i][j]>Max)
			{
				Max=array[i][j];
				
			}
			else if(array[i][j]<Min)
			{
				Min=array[i][j];
			//cout<<"Minimum number is=="<<Min;
			}
	
		}
	}
	
	// always display values Max and Min outside the loop
	cout<<"Maximum number is=="<<Max<<endl;
	cout<<"Minimum number is=="<<Min;
	return 0;
}
