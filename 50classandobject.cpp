#include<iostream>

using namespace std;
class myClass{
    public:
    int a;
    string myString;
};
int main (){
myClass myObj;   //create an object of myClass:-

   //acess attribute and set values
   myObj.a = 2;
   myObj.myString = "adityraj singh chouhan";

   //print attribute values
   cout<<myObj.a<<"  "<<myObj.myString<<endl;
    return 0;
}