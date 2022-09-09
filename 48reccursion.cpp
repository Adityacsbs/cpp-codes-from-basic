#include<iostream>

using namespace std;
int myFunction(int a){
    if(a>0){
        return a+ myFunction(a-1);
    }
    else{

    return 0;
    }
}
int main (){
    int c;
    cout<<"enter the number:-"<<endl;
    cin>>c;
    
    cout<<myFunction(c)<<endl;

    return 0;
}
/*When the sum() function is called, it adds parameter k 
to the sum of all numbers smaller than k and returns the result. 
When k becomes 0, the function just returns 0. When running, the program follows these steps*/