#include<iostream>

using namespace std;

int main(){
     
     //24. Write a program in C++ to convert temperature in Kelvin to Fahrenheit. 

     float tem_kelvin;

     cout<<"Enter temperature in kelvin :- \t"<<endl;
     cin>>tem_kelvin;

     cout<<"Now we will convert into Fahrenheit\n\n "<<endl;

     float temp;

     temp=(9.0/5)*(tem_kelvin-273.15)+32;

     cout<<"\ttemprature after conversion is :- \t"<<temp<<endl;



    return 0;
}