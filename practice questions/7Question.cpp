#include<iostream>

using namespace std;
//11. Write a program in C++ to print the result of the specified operations.

int main(){

        int a,b,c;

        cout<<"enter the number a, b, c for some operations in same order:-"<<endl;
        cout<<"enter number a:-"<<endl;
        cin>>a;
        cout<<"enter number b:-"<<endl;
        cin>>b;
        cout<<"enter number c:-"<<endl;
        cin>>c;

        cout<<"the operation 1 is :- "<<((a+b)*c)-(a*b)<<endl;
        cout<<"the operation 2 is:- "<<(a/c)+(b-c)<<endl;
        cout<<"the operation 3 is :- "<<(a*b*c)*(((a*b*3*c)-(a*c)-b)/c)<<endl;
        

    return 0;
}