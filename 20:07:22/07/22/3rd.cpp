#include<iostream>
using namespace std;

void solve(){
    int totalLamps, RedLamp ,BlueLamp, RedPrice, BluePrice, Money;
    cin>>totalLamps>>RedLamp>>RedPrice>>BluePrice;

    if (RedLamp == totalLamps)
    {
        Money = (RedLamp*RedPrice);
    }else if (RedLamp == 0)
    {
        Money = totalLamps*min(RedPrice, BluePrice);
    }
    else if (RedLamp>=1){
        BlueLamp = (totalLamps-RedLamp);
        Money = (BlueLamp*min(RedPrice, BluePrice))+(RedLamp*RedPrice);
   
    }
    cout<<Money<<endl;
    
}



int main(){

    int T;
    cin>>T;

    while(T--){

        solve();

    }

    return 0;
}