#include<iostream>

using namespace std;

         struct student
         {
            int age;
            string address;
            int roll_no;
         };
int main(){

    student adityaraj;
    adityaraj.age=18;
    adityaraj.address="dewas";
    adityaraj.roll_no=1;

    student varun;
    varun.age=19;
    varun.address="indore";
    varun.roll_no=67;

    cout<<adityaraj.age<<"  "<<adityaraj.address<<"  "<<adityaraj.roll_no<<endl;
         

                  
         

    return 0;
}