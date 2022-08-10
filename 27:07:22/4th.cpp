#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int a,b,c;
        cin>>a>>b>>c;
        
        int a1 = a<b?a:b;
        int a2 = a<c?a:c;
        int a3 = b<c?b:c;

        if (a1 == a2)
        {
           if(a2 == a3){
            if(a3 == a1){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
           }else{
               cout<<"no"<<endl;

           }
          
        }

         else{
               cout<<"no"<<endl;

           }
    
    }


    return 0;
}