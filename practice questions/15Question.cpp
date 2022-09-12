#include<iostream>

using namespace std;

int main(){
    
    //22. Write a program in C++ to find the third angle of a triangle.

    float a,b,c;

    cout<<"enter the two angles of triangle for calculating the third angle :- "<<endl;

    cin>>a>>b;

    c=180-(a+b);

    cout<<"The third angle of triangle is :-\t"<<c<<endl;

    return 0;
}
