#include<iostream>

using namespace std;

int main(){

      int j,n;
      cout<<"enter a number n:-";
      cin>>n;

      j=2;
      
       for(int i=1;i<100;i++){
        if(i==j){
          continue;
        }
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
       }


    return 0;
}