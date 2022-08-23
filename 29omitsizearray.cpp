#include<iostream>

using namespace std;

int main(){
  
  string students_name[67]={"aarushi","aadityaraj singh chouhan","abbir","abhinav","aditya(despo) jain","aditya shivhare","parth v(paro)","nikhil b","jay rusian","meena pankaj","aksht gattu sharma","varun tina sharma",""};
     students_name[13]="gourav-chodu";
     students_name[12]="S-T(bkl)";      
     for(int i=0;i<67;i++){
        cout<<i<<"."<<students_name[i]<<endl;
     }

     cout<<"\n\nthe size of array is:- "<<sizeof(students_name)<<endl;


    return 0;
}