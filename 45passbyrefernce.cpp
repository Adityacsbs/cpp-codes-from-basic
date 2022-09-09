#include<iostream>
/*we used normal variables when we passed parameters to a function. 
 You can also pass a reference to the function. This can be useful when you need to change the value of the arguments:*/

using namespace std;
void swap_numbers(int &a,int &b){
    int z=a;
    a=b;
    b=z;
}
int main (){
  
  int first_number,last_number;

  cout<<"enter the number for swap:-"<<endl;
  cin>>first_number>>last_number;

  cout<<"before swap:-"<<first_number<<","<<last_number<<endl;

  swap_numbers(first_number,last_number);//calling funct

 cout<<"after swap:-"<<first_number<<","<<last_number<<endl;

  

   

    return 0;
}