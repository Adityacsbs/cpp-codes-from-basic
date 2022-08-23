#include<iostream>

using namespace std;

int main(){
   
   int n;

   cout<<"enter a number for loopi:-"<<endl;
   cin>>n;

   for(int i=1;i<1000;i++){
    if(i==11){
        break;

    }
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
   }


    return 0;
}