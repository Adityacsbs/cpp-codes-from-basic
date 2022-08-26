#include<iostream>

using namespace std;

int main(){
      //14. Write a program in C++ to calculate the volume of a sphere.

      cout<<"we are here to calculate the volume of a sphere."<<endl;
       int r;
       float volume;
       float pi=3.1415;

      cout<<"\t enter the radius of sphere:-"<<endl;
      cin>>r;

      volume=4/3*(pi*r*r*r);


      cout<<"\t the volume of the sphere is :-"<<volume<<endl;

    return 0;
}