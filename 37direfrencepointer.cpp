#include<iostream>

using namespace std;

int main(){
      
      string college ="SOIT";

      string* adcllg=&college;

      cout<<"college name is    "<<college<<endl;

      cout<<"address where soit is stored :-"<<&college<<endl;

      cout<<adcllg<<" it also address but by * this :-"<<endl;

      cout<<*adcllg<<" abb humne direference kra hai "<<endl;


    return 0;
}