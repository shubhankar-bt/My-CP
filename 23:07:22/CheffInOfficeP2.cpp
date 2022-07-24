#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x, y;
	    cin>>x>>y;
	    int ans = 0;
	    for(int i=0; i<4; i++){
            ans = ans+x;
        }

        if(y!=0){
            ans = ans+y;
        }

        cout<<ans<<endl;;
	   
	    
	}
	return 0;
}
