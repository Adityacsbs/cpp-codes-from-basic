#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"enter all the numbers :\n";
    cin>>a>>b>>c;
    
    if(a>b&&a>c){
        cout<<"a is greater than b and c\n";
    }
    else{
        cout<<"a is smalller than b and c\n";
    }
    
    return 0;
}
