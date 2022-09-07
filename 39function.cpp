#include<iostream>

using namespace std;

       void adityaraj(){
        cout<<"this is fuction okh :-"<<endl;
        cout<<"we will perform some operation here an we will call function after wards"<<endl;
        int a,b,c;
        cout<<"enter the three numbers :- "<<endl;
        cin>>a>>b>>c;
        c=(((a*b)+c)*a);
        cout<<"the answer after calculation  is :- "<<c<<endl; 
       }
int main (){
       
        adityaraj();
       //we can call function as many times we want to call so we have to write this again and again :-
       adityaraj();
       adityaraj();
       adityaraj();
       adityaraj();



    return 0;
}