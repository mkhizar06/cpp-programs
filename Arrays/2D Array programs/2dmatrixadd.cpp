#include <iostream>
#include <cmath>
#include <conio.h>
#include<iomanip>
// want to find the lrgest element in the array
 using namespace std;
 const int Rsize=3;
 const int Csize=3;          //avg=float(sum)/size;

int main() {
   
   int M1[Rsize][Csize]={
   								{1,2,3	},
								{3,4,5	},
   								{4,5,6	}
   							};
 int M2[Rsize][Csize]={
   								{10,20,30	},
								{30,40,50	},
   								{40,50,60	}
   							};
   							
int M3[Rsize][Csize];

   cout<<"\ndisplay matrix M1 array\n";
   for(int i=0;i<Rsize;i++)
   {
   	for(int j=0;j<Csize;j++)
   		{
   			cout<<M1[i][j]<<"\t";
	   	}
	   	cout<<endl;
	}
	cout<<"\ndisplay matrix M2 array\n";
   for(int i=0;i<Rsize;i++)
   {
   	for(int j=0;j<Csize;j++)
   		{
   			cout<<M2[i][j]<<"\t";
	   	}
	   	cout<<endl;
	}
   
  cout<<"\nMATRIX Subtraction\n";
   for(int i=0;i<Rsize;i++)
   {
   	for(int j=0;j<Csize;j++)
   		{
   			M3[i][j]=M1[i][j]-M2[i][j];
	   	}
	   	
	}
cout<<"\ndisplay matrix M3 array\n";
   for(int i=0;i<Rsize;i++)
   {
   	for(int j=0;j<Csize;j++)
   		{
   			cout<<M3[i][j]<<"\t";
	   	}
	   	cout<<endl;
	}
	
	
   return 0;
}


