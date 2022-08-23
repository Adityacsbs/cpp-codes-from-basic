#include<iostream>

using namespace std;

int main(){

int i=0;
   while(i<50){
    if(i==3){
        i++;
        continue;
    }
    cout<<i<<endl;
    i++;
    if(i==34){
        break;
    }
   }    
    return 0;
}