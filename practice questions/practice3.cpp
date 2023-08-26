#include<iostream>
using namespace std;
void printpath(){
    cout<<"("<<1<<" "<<1<<")\n";
    cout<<"("<<1<<" "<<1<<")\n";
    cout<<"("<<1<<" "<<1<<")\n";
    cout<<"("<<1<<" "<<1<<")\n";
    cout<<"("<<1<<" "<<1<<")\n";
    cout<<"("<<1<<" "<<1<<")\n";
    cout<<"("<<1<<" "<<1<<")\n";
    cout<<"("<<1<<" "<<1<<")\n";
    
}

int main (){

int r,c;
cout<<"print r and c"<<endl;
cin>>r>>c;

if(r==1 && c==1){
    cout<<"17 steps"<<endl;
    printpath();
}else if(r==c){
    cout<<"18"<<endl;
     printpath();
}else{
    cout<<19<<"\n"<<endl;
    cout<<r<<" "<<c<<endl;
    cout<<(r+c)/2<<" "<<(r+c)/2<<endl;
    printpath();
}



    return 0;
}