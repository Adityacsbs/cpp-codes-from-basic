#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--){
	    int a,b;
	    cin>>a>>b;
	    if(a>b){
	       
	        cout<<a-b<<endl;
	    }
	    else if(a==b){
	        cout<<0<<endl;
	        
	    }
	    else {
	       
	        cout<<b-a<<endl;}
	       
	}
	return 0;
}
