#include<iostream>

using namespace std;

int main()
{
	int b=50;
	int *a=&b;    //Stores address of b
	int** c=&a;   //Stores address of pointer variable (pointer-to-pointer)
	cout<<"\nValue of b: "<<b<<endl;     //prints value of b
	cout<<"\nAddress of b: "<<a<<endl;    //prints address of b
	cout<<"\nAddress of pointer variable 'a': "<<c<<endl;   //prints address of *a
	cout<<"\nValue at address of a: "<<*a<<endl;  //prints value at address of a
	int *p=NULL;
	cout<<p<<endl;
	int gradeList[8] = {92,85,75,88,79,54,34,96};
    int *myGrades = gradeList;
    cout << gradeList[1]<<endl;
    cout << *myGrades<<endl;
    cout << *(myGrades + 2)<<endl;
    cout << myGrades[3]<<endl;
}