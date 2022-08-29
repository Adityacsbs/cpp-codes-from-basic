#include<iostream>

using namespace std;

int main(){

         // Write a program in C++ to display the operation of pre and post increment and decrement.

         int a;

         cout<<"Enter a number for pre and post increment and decrement:-"<<endl;
         cin>>a;

         ++a;
         cout<<"the number is after pre "<<a<<endl;
         a++;
         cout<<"the number after post"<<a<<"          "<<a++<<"we are using pre and post incrment:-"<<a<<endl;
         a++;
         cout<<"now we are using decrement pre and post:-"<<a<<"   "<<--a<<"\nafter pre decrement:-"<<a--<<"\nafter post decerement"<<endl;



    return 0;
}
