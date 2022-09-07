#include<iostream>
using namespace std;
/*However, it is possible to separate the declaration and the definition of the function - for code optimization.

You will often see C++ programs that have function declaration above main(), and function definition below main().
 This will make the code better organized and easier to read:
*/

void myfunction();// function was declared here:-

int main (){

  //  cout<<"in this  code we will declare function at starting and function defination will be done at last :- "<<endl;


    myfunction();    //calling function here :

    return 0;
}
   void myfunction(){
         cout<<"in this we have declared function at top but we are defening here :- "<<endl;
         int a;
         cin>>a;       
    }


