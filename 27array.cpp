#include<iostream>

using namespace std;

int main(){

    string cities[]={"dewas","indore","bhopal","pune"};
    int priority[]={1,3,4,2};

    //how to access any one of array:-
    cout<<"i love "<<cities[1]<<endl;
    cout<<"in priority order:indore is in "<<priority[3]<<endl;

    //to change the array element

    cities[2]="bombay";
    cout<<"i have changed bhopal with this"<<cities[2]<<endl;
    return 0;
}