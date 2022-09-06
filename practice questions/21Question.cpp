//30. Write a program in C++ to compute the total and average of four numbers. 
#include<iostream>
 
using namespace std;

int main(){  
    float a,b,c,d;

   cout<<" enter four numbers four "<<endl;

   cin>>a>>b;
   cin>>c>>d;

float sum;
float avg;

sum=a+b+c+d;
avg=sum/4;

cout<<"The sum is :- "<<sum<<endl;
cout<<"The avg is :- "<<avg<<endl;




    return 0;
}
