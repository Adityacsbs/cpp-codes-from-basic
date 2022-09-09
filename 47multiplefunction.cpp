#include<iostream>

using namespace std;
int myFunction(int a,int b){
    cout<<"enter the values of a and b:- "<<endl;
    cin>>a>>b;
    return 52+(a*b-6);
}
float myFunction1(float e, float r){
    return 34+(e*r)*2;
}
void myFunction2(int a,int b,string name){
    cout<<"enter your two sub marks out of hundred and name :-"<<endl;
    cin>>a>>b;
    getline(cin,name);
    cout<<"welcome master/miss:- "<<name<<endl;
    if (a<33||b<33)
    {
        cout<<"you are fail buddy fuck of now ";
    }
    else{
     cout<<"you are pass beta just chill now :- ";
    }
    
   
}
int main (){
  //  int ok=myFunction(3,5);
    //cout<<ok<<endl;
    cout<<myFunction(4,5)<<endl;
    cout<<myFunction1(0.34,2.3)<<endl;
    myFunction2(45,32,"adityaraj_singh_chouhan");
    return 0;
}
//Note: Multiple functions can have the same name as long as the number and/or type of parameters are different.

