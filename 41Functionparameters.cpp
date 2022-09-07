//Parameters and Arguments
/*Information can be passed to functions as a parameter. Parameters act as variables inside the function.

Parameters are specified after the function name, inside the parentheses.
 You can add as many parameters as you want, just separate them with a comma:*/
#include<iostream>

using namespace std;

void student_details(string name , string address,int age)
{
    cout<<name<<" is student of SOIT \n pursuing B.Tech in CSBS\n currently studying in 1st year :-"<<endl;
    cout<<"Address of student is "<<address<< "\n Age of student is  "<<age<<endl;
}

int main (){

    student_details("aadityaraj singh chouhan","dewas",20);
    student_details("sumit jha ","dewas",20); 
       
       //we can add infinte number of students lists 





    return 0;
}

/*When a parameter is passed to the function, it is called an argument.
 So, from the example above: fname is a parameter, while Liam, Jenny and Anja are arguments.*/