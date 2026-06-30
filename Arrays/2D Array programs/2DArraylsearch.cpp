#include <iostream>
#include <cmath>
#include <conio.h>
#include<iomanip>

 using namespace std;
 const int Rsize=3;
 const int Csize=3;          

int main() {
   //int result[Rsize]={0,0,0};
   int table[Rsize][Csize]={
   								{1,2,3	},
								{11,12,13	},
   								{14,15,16	}
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
	int num;
	cout<<" enter a number you want to search=>";
	cin>>num;
	int r,c;   bool found=false; 
	for(int i=0;i<Rsize;i++)
	   {
	   	for(int j=0;j<Csize;j++)
	   		{
	   			if(num==table[i][j])
	   			{
	   				r=i;	
	   				c=j;
	   				found=true;
	   				break;
				}
		   	}
		}
   if(found==true)
	   {
	   	cout<<"\nnumber "<<num <<"is found in the list at row index "<<r<<" and column index "<<c;
	   }
   else
   	{
   		cout<<"number not found in the list";
	 }
   return 0;
}


