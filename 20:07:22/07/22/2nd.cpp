#include<iostream>
using namespace std;

void solve(){
    int n, m ,k, ans;
    cin>>n>>m>>k;
    if(n%(m*k)!= 0){
        ans = n/(m*k)+1;
    }else{
    ans = n/(m*k);
    }

    cout<<ans<<endl;
}



int main(){

    int T;
    cin>>T;

    while(T--){

        solve();

    }

    return 0;
}