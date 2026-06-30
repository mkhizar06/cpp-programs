#include <iostream>
#include <cmath>
#include <conio.h>
#include<iomanip>

 using namespace std;
 const int Rsize=3;
 const int Csize=3;          

int main() {
   int result[Rsize]={0,0,0};
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
   
   int sum=0;
   for(int i=0;i<Rsize;i++)
   {
   	for(int j=0;j<Csize;j++)
   		{
   			result[i]=result[i]+table[i][j];
	   	}
	   	
	}
   cout<<"\nrow by row sum";
   for(int i=0;i<Rsize;i++)
   {
   	cout<<"\n row "<<i<<" sum="<<result[i]<<"\n";
   }
   
   return 0;
}


