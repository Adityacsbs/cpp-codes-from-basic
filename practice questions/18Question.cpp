#include<iostream>
#include<math.h>
#define PI 3.141592

using namespace std;

int main(){

    //28. Write a program in C++ to find the area of Scalene Triangle. 
 float a,b,c;
    cout<<"Find the area of Scalene Triangle :"<<endl;
    cout<<"--------------------------------";

    //area ka formula = 1/2*a*b*angle btw a and b
  

    cout<<"\nEnter the side of the triangle :- ";
    cin>>a;
    cout<<"\n Enter another side of the triangle : ";
    cin>>b;

    cout<<"\n Enter the angle between both sides : ";
    cin>>c;

float area;
area = (a*b*sin((PI/180)*c))/2;

     cout<<"\t Area of triangle  : - "<<area<<endl;



    return 0;
}