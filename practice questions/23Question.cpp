#include<iostream>

using namespace std;
int main (){
    //32. Write a program in C++ to check whether a number is positive, negative or zero. 


    int a;

    cout<<"enter number a:-\b";
    cin>>a;;

    if(a>0){
        cout<<"it is a positive number"<<endl;
    }
   
    else if (a<0)
    {
        cout<<"its is negative number";
    }
    else{
        cout<<"the number is zero";
    }
    
    return 0;
}
