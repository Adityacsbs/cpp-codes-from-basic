#include<iostream>

using namespace std;

int main(){
  //29. Write a program in C++ to compute quotient and remainder. 

  cout<<"Compute quotient and remainder :";
  cout<<"\n------------------";
  int a,b;
cout<<"\ninput the divident : ";
cin>>a;
cout<<"\ninput the divisor : ";
cin>>b;

float quo;
int remainder;
quo=a/b;
remainder=a%b;
cout<<"The quotient of the division is "<<quo<<endl;
cout<<"The remainder of the division is : "<<remainder<<endl;


    return 0;
}