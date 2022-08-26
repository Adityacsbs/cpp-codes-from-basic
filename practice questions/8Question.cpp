#include<iostream>

using namespace std;

int main(){
     //13. Write a program in C++ to swap two numbers.
     int num1,num2,temp;
     cout<<"this program is for swaping the numbers:-"<<endl;

     cout<<"\t1. enter first number to swap :-"<<endl;
    cin>>num1;
    cout<<"\t2. enter second number to swap :-"<<endl;
    cin>>num2;
    
     temp=num1;
     num1=num2;
     num2=temp;

     cout<<"\t1. number is swapped "<<num1<<endl;
     cout<<"\t2. number is swapped "<<num2<<endl;


    return 0;
}