#include<iostream>
using namespace std;

void a1(){
    int a;
     cout<<"enter the number :";
    cin>>a;
    cout<<"the reminder is :- "<<a%10<<endl;

}
void a2(){
    int a;
    cout<<"enter the number : "<<endl;;
   cin>>a;

   if (a%10==0){
    cout<<"0"<<endl;
   }
   else {
    cout<<a%10<<endl;
   }
   cout<<"last digit will be :" + a%10;
}
void a3(){
    int t;
    cin>>t;
    while(t--){
        int count =0;
        int a;
        cout<<"enter the number :";
        cin>>a;
        while(a>0){
            int b = a%10;
            if(b==5){
            count++;
            }
            a=a/10;
        }
        cout<<count<<endl;
    }
    
}

void a4(int N){
  string res ="";

  while(N>0){
    int rem = (N-1)%26;
    char c = 'A'+rem;
    res = c + res;
 N = (N-1)/26;
  }
 cout<<res<<endl;

        
    }

int main (){

    
    a4(26);
    return 0;

}