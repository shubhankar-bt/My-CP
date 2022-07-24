#include<iostream>
using namespace std;

int main(){

    int T;
    cin>>T;

    while(T--){
        int N, K;

        cin>>N>>K;
        if(N>K){
            cout<<"No"<<endl;
        }else if (N==K)
        {
           cout<<"No"<<endl;
        }else
        {
            cout<<"Yes"<<endl;
        }


    }

    return 0;
}