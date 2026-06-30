#include <iostream>
#include <cmath>
#include <conio.h>
#include<iomanip>
// want to find the lrgest element in the array
 using namespace std;
 const int Rsize=3;
 const int Csize=3;          //avg=float(sum)/size;

int main() {
   //int result[Rsize]={0,0,0};
   int table[Rsize][Csize]={
   								{1,2,3	},
								{3,4,5	},
   								{4,5,6	}
   							};
   cout<<"\ndisplay origional 2D array\n";
   for(int i=0;i<Rsize;i++)
   {
   	for(int j=0;j<Csize;j++)
   		{
   			cout<<table[i][j]<<"\t";
	   	}
	   	cout<<endl;
	}
	
	//cout<<" sum of the values above the diagonal";
	int sum1=0, sum2=0;
	for(int i=0;i<Rsize;i++)
	   {
	   	for(int j=0;j<Csize;j++)
	   		{
	   			if (i<j)
	   				{
	   					sum1=sum1+table[i][j];
				   	}	
				else if(i>j)
						{
						sum2=sum2+table[i][j];	
						}
		   	}
		   	
		}
	cout<<" \nsum of the values above the diagonal="<<sum1;;
	cout<<" \n\nsum of the values below the diagonal="<<sum2;;
	cout<<"\n\nDiagonal Sum";
	
	int sum=0;
	for(int i=0;i<Rsize;i++)	//i=0+1=1+1=2+1=3
	{
		sum=sum+table[i][i];	//sum=0+1=1+4=5+6=11
	}
   cout<<"\nDiagonal Sum="<<sum;
   
   
   return 0;
}


