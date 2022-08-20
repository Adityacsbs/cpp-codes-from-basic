#include<iostream>

using namespace std;

int main()
{
    string firstName;
    string lastName;

    

    cout<<"enter your first name:"<<endl;
    cin>> firstName;
    cout<<"enter yoour last name:"<<endl;
    cin>> lastName;
    string fullName= firstName.append(lastName);
    cout<<"hello sir your name is :-"<< fullName;

    return 0;
}