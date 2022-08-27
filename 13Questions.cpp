#include<iostream>

using namespace std;

int main(){
          
          //19. Write a program in C++ to find the area and circumference of a circle. 

          //2*pi*r

          float radius ,circum;
          float pi=3.141592653589793238;

          cout<<"ente the radius for circumferenceand radius of circle :- "<<endl;

          cin>>radius;

          circum=2*pi*radius;

          cout<<"the circumference of circle is :- "<<circum<<endl;

          float area;

          area = pi*radius*radius;

          cout<<"the area of circle of :- "<<area<<endl;
          
            




    return 0;
}