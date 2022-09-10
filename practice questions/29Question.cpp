#include<iostream>

using namespace std;

int main(){
    
    int a,b;
    
    cin>>a;
    cin>>b;

    string number[]={"","one","two","three","four","five","six","seven","eight","nine"};
    
    for (int i=a; i<=b ; i++) {

        cout<<number[i]<<endl;
  
    
     if ( i%2==0) {
   cout<<"even"<<endl; 
    }
    else {
    cout<<"odd";
    }}
    
    
    return 0;
} 
