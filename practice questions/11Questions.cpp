#include<iostream>

using namespace std;

int main(){
       //17. Write a program in C++ to find the Area and Perimeter of a Rectangle. 
    

    float x,y,area,perimeter;

    cout<<"we are finding the area and perimeter of a rectangle :-"<<endl;

    cout<<"enter the length of rectangle :-"<<endl;
    cin>>x;
    cout<<"enter the height of rectangle :-"<<endl;
    cin>>y;

    area=(x*y);

    perimeter=2*(x+y);

    cout<<"area of rectangle is :- "<<area<<endl;
    cout<<"perimeter of rectangle is :- "<<perimeter<<endl;
    
    
    
    return 0;
}