#include<iostream>

using namespace std;

int main(){
//viva grp names of all grp members and their sequence:-
    string viva_group[15][5]={
        {"null","null","null","null","null"},
        {"aarushi","aadityaraj","abbir","abhinav","aditya jain",},
        {"aditya shivhare","akshat sharma","aayush bhind","arpit","arundhadti"}
    };

       viva_group[12][0]="varun";
       viva_group[12][1]="vanshikha";
       

    for(int i=0;i<15;i++){
        for(int j=0;j<5;j++){

        cout<<i<<"."<<viva_group[i][j]<<endl;
        }
    }
    return 0;
}