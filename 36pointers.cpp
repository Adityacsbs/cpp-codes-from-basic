#include<iostream>

using namespace std;

int main(){
       
       string name="adityaraj";

       string* adname=&name;

       cout<<"name of candidate is "<<name<<endl;

       cout<<&name<<endl;

       cout<<adname<<endl;


    return 0;
}