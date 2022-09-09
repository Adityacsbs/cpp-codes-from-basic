#include<iostream>

using namespace std;
void list(string ok[5]){
    for(int i=0; i<5;i++){
        cout<<ok[i]<<endl;
    }
        
}
int main (){

    string ok[5]={"adityaraj ","akshat","varun","nikhil","parth"};

    list(ok);



    return 0;
}
/*Example Explained
The function (myFunction) takes an array as its parameter (int myNumbers[5]), and loops through the array elements with the for loop.
When the function is called inside main(), we pass along the myNumbers array, which outputs the array elements.
Note that when you call the function,
 you only need to use the name of the array when passing it as an argument myFunction(myNumbers). However, the full declaration of the array is needed in the function parameter (int myNumbers[5]).*/