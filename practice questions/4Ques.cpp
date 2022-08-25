#include<iostream>
#include<climits>

using namespace std;

int main(){
   /*
   5. Write a program in C++ to check the upper and lower limits of integer. Go to the editor
Expected Output:
Check the upper and lower limits of integer :
--------------------------------------------------
The maximum limit of int data type : 2147483647
The minimum limit of int data type : -2147483648
The maximum limit of unsigned int data type : 4294967295
The maximum limit of long long data type : 9223372036854775807
The minimum limit of long long data type : -9223372036854775808
The maximum limit of unsigned long long data type : 18446744073709551615
*/   
       int a;
       unsigned int b;
       long long c;
       unsigned long long d;

       cout<<"The maximum limit of int data type is :-"<<INT_MAX<<endl;
       cout<<"The minimum limit of int data type is :-"<<INT_MIN<<endl;
       cout<<"The maximum limit of unsigned int data type is :-"<<UINT_MAX<<endl;
       cout<<"The miximum limit of long long data type is :-"<<LLONG_MAX<<endl;
       cout<<"The minimum limit of long long data type is :-"<<LLONG_MIN<<endl;
       cout<<"The maximum limit of unsigned  long long data type is :-"<<ULLONG_MAX<<endl;

    return 0;
}