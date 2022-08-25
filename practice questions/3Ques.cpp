#include<iostream>
using namespace std;
int main(){
/*3. Write a program in C++ to find Size of fundamental data types. Go to the editor
Sample Output:
Find Size of fundamental data types :
------------------------------------------
The sizeof(char) is : 1 bytes
The sizeof(short) is : 2 bytes
The sizeof(int) is : 4 bytes
The sizeof(long) is : 8 bytes
The sizeof(long long) is : 8 bytes
The sizeof(float) is : 4 bytes
The sizeof(double) is : 8 bytes
The sizeof(long double) is : 16 bytes
The sizeof(bool) is : 1 bytes
*/


int a;
short b;
char c;
long d;
long long e;
float f;
double g;
long double h;
bool i;

cout<<"The sizeof(int) is :"<<sizeof(a)<<" bytes"<<endl;
cout<<"The sizeof(short) is :"<<sizeof(b)<< "bytes" <<endl;
cout<<"The sizeof(char) is :"<<sizeof(c)<<" bytes"<<endl;
cout<<"The sizeof(long) is:"<<sizeof(d)<<" bytes"<<endl;
cout<<"The sizeof(long long) is :"<<sizeof(e)<<" bytes"<<endl;
cout<<"THe sizeof(float) is :"<<sizeof(f)<<" bytes"<<endl;
cout<<"The sizeof(double) is :"<<sizeof(g)<<" bytes"<<endl;
cout<<"The sizeof(long double) is :"<<sizeof(h)<<" bytes"<<endl;
cout<<"the sizeof(bool) is :"<<sizeof(i)<<" bytes"<<endl;

    return 0;
}