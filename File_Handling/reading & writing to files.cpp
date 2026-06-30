#include<fstream>
#include<iostream>
#include<string>

using namespace std;

int main()
{
//	creating file
	ofstream writing;
	writing.open("C:\\Users\\Khizar\\Desktop\\C++ PROGRAMS\\File_Handling\\Myfile.txt");
//	writing data into file
	writing<<"We Will Marry soon Insha Allah!\nKhizar and Rabia ";
	cout<<"\nData written successfully!\n\n";
//	closing file
	writing.close();
	ifstream reading;
	string line;
//	opening file for reading
	reading.open("Myfile.txt");
	if(!reading)
	{
		cout<<"\nFile cannot be opened!";
	}
	else
	{	
		while(!reading.eof()) // eof=end of file marker
		{
//			this will read till the 1st line ends and print that line
			reading>>line;
			cout<<line<<"  ";
		}
	}
	reading.close();

}