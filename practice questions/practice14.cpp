#include<iostream>
using namespace std;


int main (){

int n;
cin>>n;

int arr[n];
int ev=0;
int odd=0;

for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==0){
        ev++;
    }else{
        odd++;
    }
    
}
if (ev>odd){
    cout<<"Ready for Battle"<<endl;
}else{
    cout<<"Not ready for Battle"<<endl;
}




    return 0;
}