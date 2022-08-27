#include<iostream>

using namespace std;

int mai (){
    
    //23. Write a program in C++ that converts kilometers per hour to miles per hour.


    float KM_ph;

    cout<<"enter the value of kilometer per hour :- "<<endl;
    cin>>KM_ph;

    float mile_per_hour ;

    mile_per_hour=(KM_ph*0.6213712);

    cout<<" the value in miles per hour is :- "<<mile_per_hour<<endl;

    return 0;
}