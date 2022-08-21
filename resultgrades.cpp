#include<iostream>

using namespace std;

int main()
{
         // result of students depending on their marks;

          int DSA,ELECTRO,STAT,LINEAR_ALGEBRA,CGPA;
         
           string Fullname;

         cout<<"enter your fullname:-"<<endl;

      getline(cin,Fullname);

         

         cout<<"Hello master "<<Fullname<<endl;

          cout<<"\nenter your marks (out of 100)down there so we can find you are eligible for next section or not:"<<endl;
          
          cout<<"Enter your overall cgpa:-"<<endl;
          cin>>CGPA;

         
           if(CGPA>=33){
            cout<<"you are passed and your grades in all subjects are given below:-\n";

             cout<<"\nenter your dsa marks:-";
          cin>>DSA;

          cout<<"\nEnter your ELECTRO marks:-";
          cin>>ELECTRO;

          cout<<"\nEnter your stat marks:-";
          cin>>STAT;

          cout<<"\nEnter your linear algebra marks:-";
          cin>>LINEAR_ALGEBRA;

           }
           else{
            cout<<"you are not passed so your grades are not given ";
           }

           if(DSA<=100&&DSA>=90){
          cout<<"you have scored A+ grade in dsa\n";}

          else if(DSA<=90&&DSA>=80){
          cout<<"you have scored A grade in dsa\n";}

           else if(DSA<=80&&DSA>=70){
          cout<<"you have scored B grade in dsa\n";}

          else if(DSA<=70&&DSA>=60){
          cout<<"you have scored C grade in dsa\n";}

           else if(DSA<=60&&DSA>=50){
          cout<<"you have scored D grade in dsa\n";}

           else if(DSA<=50&&DSA>=40){
          cout<<"you have scored E grade in dsa\n";}

           else if(DSA<=40&&DSA>=33){
          cout<<"you have scored passing marks  in dsa\n";}


          else{
            cout<<"\n  tu fail ho gaya hai dsa me jake padai kr ";
          }

           if(ELECTRO<=100&&ELECTRO>=90){
          cout<<"you have scored A+ grade in ELECTRO\n";}

          else if(ELECTRO<=90&&ELECTRO>=80){
          cout<<"you have scored A grade in ELECTRO\n";}

           else if(ELECTRO<=80&&ELECTRO>=70){
          cout<<"you have scored B grade in ELECTRO\n";}

          else if(ELECTRO<=70&&ELECTRO>=60){
          cout<<"you have scored C grade in ELECTRO\n";}

           else if(ELECTRO<=60&&ELECTRO>=50){
          cout<<"you have scored D grade in ELECTRO\n";}

           else if(ELECTRO<=50&&ELECTRO>=40){
          cout<<"you have scored E grade in ELECTRO\n";}

           else if(ELECTRO<=40&&ELECTRO>=33){
          cout<<"you have scored passing marks  in ELECTRO\n";}


          else{
            cout<<"\n  tu fail ho gaya hai ELECTRO me jake padai kr ";
          }

            if(STAT<=100&&STAT>=90){
          cout<<"you have scored A+ grade in STAT\n";}

          else if(STAT<=90&&STAT>=80){
          cout<<"you have scored A grade in STAT\n";}

           else if(STAT<=80&&STAT>=70){
          cout<<"you have scored B grade in STAT\n";}

          else if(STAT<=70&&STAT>=60){
          cout<<"you have scored C grade in STAT\n";}

           else if(STAT<=60&&STAT>=50){
          cout<<"you have scored D grade in STAT\n";}

           else if(STAT<=50&&STAT>=40){
          cout<<"you have scored E grade in STAT\n";}

           else if(STAT<=40&&STAT>=33){
          cout<<"you have scored passing marks  in STAT\n";}


          else{
            cout<<"\n  tu fail ho gaya hai STAT me jake padai kr ";
          }

           if(LINEAR_ALGEBRA<=100&&LINEAR_ALGEBRA>=90){
          cout<<"you have scored A+ grade in LINEAR\n";}

          else if(LINEAR_ALGEBRA<=90&&LINEAR_ALGEBRA>=80){
          cout<<"you have scored A grade in LINEAR\n";}

           else if(LINEAR_ALGEBRA<=80&&LINEAR_ALGEBRA>=70){
          cout<<"you have scored B grade in LINEAR\n";}

          else if(LINEAR_ALGEBRA<=70&&LINEAR_ALGEBRA>=60){
          cout<<"you have scored C grade in LINEAR\n";}

           else if(LINEAR_ALGEBRA<=60&&LINEAR_ALGEBRA>=50){
          cout<<"you have scored D grade in LINEAR\n";}

           else if(LINEAR_ALGEBRA<=50&&LINEAR_ALGEBRA>=40){
          cout<<"you have scored E grade in LINEAR\n";}

           else if(LINEAR_ALGEBRA<=40&&LINEAR_ALGEBRA>=33){
          cout<<"you have scored passing marks  in linear algebra\n";}


          else{
            cout<<"\n  tu fail ho gaya hai LINEAR ALGEBRA me jake padai kr ";
          }

          if(DSA<33&&STAT<33&&LINEAR_ALGEBRA<33&&ELECTRO<33){
            cout<<"tu chutiya hai tere se nahi ho payega jake majduri kr";
          }
          
    return 0;
}