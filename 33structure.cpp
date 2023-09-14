#include<iostream>
using namespace std;

struct student {
    int year;
    string college;
    string branch;
}onkar,yaspal,jaspal;

int main(){
  
  onkar.year=1998;
onkar.branch="cse";
onkar.college="jec";

yaspal.year=1992;
yaspal.branch="mechnical";
yaspal.college="sgsits";
    

jaspal.year=1998;
jaspal.branch="IT";
jaspal.college="IIT Bombay(powai)";

cout<<onkar.year<<""<<onkar.branch<<"  "<<onkar.college<<""<<endl;
cout<<yaspal.year<<" "<<yaspal.branch<<" "<<yaspal.college<<" "<<endl;
student parth;
parth.year=2004;
parth.branch="ec";
parth.college="rgpv";

cout<<parth.year<<" "<<parth.branch<<" "<<parth.college<<" "<<endl;



    return 0;
}
