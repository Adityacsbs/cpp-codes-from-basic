#include<iostream>
using namespace std;
class Solution{
    public:

    void p1(){
        
    int t;
    cout<<"enter t"<<endl;
    cin>>t;

    while(t--){
        int s,w1,w2,w3;
        cout<<"enter :-"<<endl;
        cin>>s>>w1>>w2>>w3;
        int count = 0;
        
       int sum = w1 + w2 + w3;
       if(s<w1 || s<w2 || s<w3){
        cout<<"weight cant be greater than strength"<<endl;
       }
       else{
       for(int i = 0 ;i < (sum/s)+1;i++){
        count ++;
       }
       cout<<count<<endl;
       }
        }

    }

   /* this logic fails as because when 
    void p2(){
        int t;
    cout<<"enter t"<<endl;
    cin>>t;
        while(t--){
        int s,w1,w2,w3,k;
        cout<<"enter :-"<<endl;
        cin>>s>>w1>>w2>>w3;
        int c = 0;
        int sum = w1 + w2 + w3;
        if(sum<=s){
            cout<<"1";
        }else{
            while(sum>0){
              sum = sum - s;
              c++;
            }
            cout<<c<<endl;
        }

    }}*/
};
int main (){
    Solution sol;
      sol.p1();
   // sol.p2();

    

    return 0;
}