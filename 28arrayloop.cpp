#include<iostream>

using namespace std;

int main(){
    
     string cities[6]={"delhi","bombay","banglore","indore","pune","dewas"};

    int rating[]={6,5,4,3,2,1};

     for(int i=0;i<6;i++ ){
        cout<<i<<"."<<cities[i]<<"  rating is:-"<<rating[i]<<endl;
        
     }


    return 0;
}