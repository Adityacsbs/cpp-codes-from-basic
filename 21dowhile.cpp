#include<iostream>

using namespace std;

int main(){
    int i=0;
    int n;

    cout<<"enter a number n:-";
    cin>>n;

    do{
        cout<<i<<endl;
        i++;

    }
    while(i<n);
    return 0;
}