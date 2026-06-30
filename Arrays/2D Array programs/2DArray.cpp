#include <iostream>
#include <cmath>
#include <conio.h>
#include<iomanip>
// want to find the lrgest element in the array
 using namespace std;
 const int Rsize=3;
 const int Csize=3;          //avg=float(sum)/size;

int main() 
{
   
   int table[Rsize][Csize]; /*={
   								{1,2,3	},
								{3,4,5	},
   								{4,5,6	}
   							};*/
 
for(int i=0;i<Rsize;i++)
   {
   	for(int j=0;j<Csize;j++)
   		{
   			cout<<"enter value at row_index"<<i<<"and col_index"<<j<<"=>";
			cin>>table[i][j];
	   	}
   }
 

   //int sum=0;
   cout<<"\ndisplay origional 2D array\n";
   for(int i=0;i<Rsize;i++)
   {
   	for(int j=0;j<Csize;j++)
   		{
   			cout<<table[i][j]<<"\t";
	   	}
	   	cout<<endl;
	}
   
   for(int i=0;i<Rsize;i++)
   {
   	for(int j=0;j<Csize;j++)
   		{
   			table[i][j]=table[i][j]*table[i][j];
	   	}
   }
   
   cout<<"\ndisplay modified 2D array\n";
   for(int i=0;i<Rsize;i++)
   {
   	for(int j=0;j<Csize;j++)
   		{
   			cout<<table[i][j]<<"\t";
	   	}
	   	cout<<endl;
	}
   
   cout<<"\n diagonal Sum";
   int sum1=0;
   for(int i=0;i<Rsize;i++)
   {
   	sum1=sum1+table[i][i];
   }
   cout<<"\n Column0 sum="<<sum1;
   return 0;
}


