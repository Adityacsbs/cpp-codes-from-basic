#include<iostream>

using namespace std;
class practice{
public:

void reverse(int n){
    int rev=0;
     while(n>0){
        int a=n%10; 
        rev= rev*10 +a;
        n=n/10;
     }
     cout<<rev<<endl;
}
};
int main (){

    int n;
    cin>>n;
     practice obj;
     obj.reverse(n);

    return 0;
}