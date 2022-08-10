#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int a,b,c,d;
        int max = 0;
        
        cin>>a>>b>>c>>d;


        if(a>b){
            max = max+a;
        }else{
            max = max+b;
        }

        if(c>d){
            max = max+c;
        }else{
            max = max+d;
        }

        cout<<max<<endl;
    }


    return 0;
}