#include<iostream>

using namespace std;

int main(){
       
       //20. Write a program in C++ to convert temperature in Celsius to Fahrenheit.

       float tem_cel;
       
       cout<<"enter the temperature in celcius ;- "<<endl;

       cin>>tem_cel;

       float fehrenheit;

       fehrenheit= tem_cel*(9/5)+32;

       cout<<"the temperature in fehrenheit is:- "<<fehrenheit<<endl;




    return 0;

}