#include<iostream>

using namespace std;

int main (){

int t;
cin>>t;
while(t--){
    long long ts ;
    cout<<"enter the value of ts"<<endl;
    cin>>ts;
    while(ts%2!=1){
        ts /=2;
    }
    for(int i =1;i<ts;i++){
        
        if(i%2==0){
            cout<<i<<",";
        }
    }
        cout<<endl;
    cout<<(ts-1)/2<<endl;
}


    return 0;
}