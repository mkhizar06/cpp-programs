#include <iostream>

#include<cstring>
using namespace std;
// passing strings in function using pointers
void test(char* );
void test(char* result1) 
{
   // strcpy( result1, "HELLO" );
   strcat(result1,"i am ABC");
}

int main() {
    char result[] ="how are you? ";
    cout<<"\n string before function calling=>"<<result;
    test(result);
    cout<<"\n string after function calling=>"<<result;
   
   return 0;

}
