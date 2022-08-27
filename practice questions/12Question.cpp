#include<iostream>
#include<cmath>

using namespace std;

int main(){
      //18. Write a program in C++ to find the area of any triangle using Heron's Formula. 
      float semi_perimeter;
      float x,y,z;
       
       cout<<"Enter the sides of triangle for area :- "<<endl;

       cin>>x>>y>>z;

       semi_perimeter=x+y+z/2;

       cout<<"semi perimeter of triangle is :- "<<semi_perimeter<<endl;

      float area;

      area = sqrt(semi_perimeter*(semi_perimeter-x)*(semi_perimeter-y)*(semi_perimeter-z));

      cout<<"The area of the triangle is :- "<<area<<endl;


    return 0;
}