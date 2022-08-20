#include<iostream>

using namespace std;

int main()
{
    string firstname;
    string last_name;
    
    
    cout<<"enter your first name:"<<endl;
    cin>>firstname;
    cout<<"enter your last name:"<<endl;
    cin>>last_name;
   string full_name = firstname+" "+ last_name ;
    cout<<"hello mr. "<<full_name;

    return 0;
}