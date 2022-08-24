#include<iostream>

using namespace std;

int main()
{
     
     string car="swift";

     string* adcar=&car;

     cout<<car<<"  name of car "<<endl;

     cout<<&car<<" address of a car"<<endl;

     cout<<adcar<<" address of car "<<endl;

     cout<<*adcar<<" here car name by dereferencing"<<endl;

     *adcar="mini_cooper";

     cout<<car<<" name has been changed"<<endl;


    return 0;
}