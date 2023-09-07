//this is code for lift first we take the number of request then we take action 
// first request first done
#include<iostream>
using namespace std;

int main (){
    int t;
    cin>>t;

    while(t--){
        int a[2];
        int b;
        int f = 0, count =0;

        cout<<"enter how many requests are there :"<<endl;
        cin>>b;
        while(b--){
            for(int i=0;i<2;i++){
                cin>>a[i];
            }
            f = f + abs(a[0]-count);
            f = f + abs(a[1]-a[0]);  
            count = a[1];
        }
        cout<<f<<endl;

    }

    return 0;
}