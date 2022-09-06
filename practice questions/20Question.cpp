 #include<iostream>

using namespace std;
int main (){
    int a,b;
    //1. Write a C++ program to compute the sum of the two given integer values. 
    //If the two values are the same, then return triple their sum. 
      cout<<"enter the two numbers :- ";
      cin>>a>>b;

    if(a==b){
        int c;
        c=(a+b)*3;
        cout<<c;
    }
    else{
        int d;
        d=a+b;
        cout<<d;
    }


    return 0;
}
