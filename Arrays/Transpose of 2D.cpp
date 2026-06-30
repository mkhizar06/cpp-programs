#include<iostream>

using namespace std;

int main()
{
	const int rows=5;
	const int col=5;
	int matrix[rows][col]={{1,2,3,4,5},{6,7,8,9,1},{0,9,8,7,6},{5,4,3,2,1},{0,2,4,6,8}};
	int i,j;
	cout<<"\t2D Matrix\n";
	cout<<"\t----------";
	for(i=0;i<rows;i++)
	{
		cout<<"\n\n\t";
		for(j=0;j<col;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
	}
	
//	Transpose of matrix
    int transpose[rows][col];
	for(i=0;i<rows;i++)
	{
		cout<<"\n\n\t";
		for(j=0;j<col;j++)
		{
			transpose[j][i]=matrix[i][j];
		}
	}
	
//	Displaying transpose of matrix
    cout<<"Transpose of 2D Matrix\n";
    cout<<"\t-----------------------";
	for(i=0;i<col;i++)
	{
		cout<<"\n\n\t";
		for(j=0;j<rows;j++)
		{
			cout<<transpose[i][j]<<" ";
		}
	}
	
	return 0;
}