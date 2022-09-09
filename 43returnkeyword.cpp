/*
The void keyword, used in the previous examples, indicates that the function should not return a value
. If you want the function to return a value, you can use a data type 
(such as int, string, etc.) instead of void, and use the return keyword inside the function:*/
#include<iostream>

using namespace std;
int adityaraj(int x,int y){
 return 2*(x+y);
}
 
int main (){

    cout<<adityaraj(23,2)<<endl;

    return 0;
}












