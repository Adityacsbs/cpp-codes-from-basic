#include<iostream>
using namespace std;



int main (){

    int students, subjects;
    cout<<"enter the number of students in class :";
    cin>>students;
    cout<<"enter the number of subjects :";
    cin>>subjects;

    int array[students][subjects];
    for(int i=1;i<=students;i++){
        cout<<"student "<<i<<" info"<<endl;
        for(int j=1;j<=subjects;j++){
            cout<<"enter marks of subject" <<j<<" :"<<endl;
            cin>>array[i][j];
        }
    }
   // result(students,subjects);
  // cout<<array[1][1]<<endl;

    return 0;
}