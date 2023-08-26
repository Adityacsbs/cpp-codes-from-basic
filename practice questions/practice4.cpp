#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){

    int t;
    cout<<"enter t"<<endl;
    cin>>t;
    while(t--){

        
        int a,b;
        cout<<"enter number :"<<endl;
        cin>>a>>b;

        if(a<10 && b<10){
        cout<<a+b<<endl;
        }
        else if(a<10){

int arr[]={a,b/10,b%10};
        int n = sizeof(arr)/sizeof(arr[0]);

        sort(arr,arr+n,greater<int>());
       // sort(arr,arr+4);
        
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
            
        }
        int sum = (arr[0]*10)+(arr[1]);
        int sum1= (arr[2]);
        cout<<"digit 1 is :-"<<sum<<"digit 2 is :"<<sum1<<":-"<<sum+sum1<<endl;
            

        } else if(b<10){

int arr[]={a/10,a%10,b};
        int n = sizeof(arr)/sizeof(arr[0]);

        sort(arr,arr+n,greater<int>());
       // sort(arr,arr+4);
        
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
            
        }
        int sum = (arr[0]*10)+(arr[1]);
        int sum1= (arr[2]);
        cout<<"digit 1 is :-"<<sum<<"digit 2 is :"<<sum1<<":-"<<sum+sum1<<endl;
            

        }
        else{

        int arr[]={a/10,a%10,b/10,b%10};
        int n = sizeof(arr)/sizeof(arr[0]);

        sort(arr,arr+n,greater<int>());
       // sort(arr,arr+4);
        
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
            
        }
        int sum = (arr[0]*10)+(arr[2]);
        int sum1= (arr[1]*10)+(arr[3]);
        cout<<"digit 1 is :-"<<sum<<"digit 2 is :"<<sum1<<":-"<<sum+sum1<<endl;
            
        }
        
    }

    return 0;
}