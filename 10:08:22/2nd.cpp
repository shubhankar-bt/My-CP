#include <iostream>
using namespace std;

void checkDominant(int arr[], int n){
    int target[] = {};
    int size = sizeof(target)/sizeof(target[0]);
    for(int i=0; i<n; i++){
        if(i<n-1){
            if(arr[i] == arr[i+1]){
                target[i] = arr[i];
                if(size > 1){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;
                }
            }
            
        }
    }
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        int arr[n];
	    cin>>n;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    checkDominant(arr, n);
	    
	}
	return 0;
}
