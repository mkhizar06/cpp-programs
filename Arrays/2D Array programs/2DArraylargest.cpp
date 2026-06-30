#include <iostream>
#include <cmath>
#include <conio.h>
#include<iomanip>

 using namespace std;
 const int Rsize=3;
 const int Csize=3;          

int main() {
   
   int table[Rsize][Csize]={
   								{6,2,3	},
								{3,-4,5	},
   								{-9,5,-10	}
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
	int smallest=table[0][0];
	int r=0,c=0;
   cout<<"\n smallest value in 2D array";
   
   for(int i=0;i<Rsize;i++)
   {
   	for(int  j=0;j<Csize;j++)
   		{
   			if(i==0 && j==0) 
			   {break; }
			if(table[i][j]<smallest)
   			{
   				smallest=table[i][j];
   				r=i;
   				c=j;
			}
	   	}
	}
   
   cout<<"\n\n smallest value in 2D array="<<smallest;
   cout<<"\n row index  "<<r<<" and column index "<<c;
  
   return 0;
}


