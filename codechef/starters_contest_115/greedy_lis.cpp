#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1){
            if(x==0){
                cout<<1<<" ";
            }else{
                cout<<-1<<" ";
            }
            cout<<endl;
        }
        else if(n-2<x){
            cout<<-1<<endl;
        }else{
            int i=n-1-x;
            for(int j=1;j<n;j++){
                if(i==j){
                    cout<<n<<" ";
                }cout<<j<<" ";
            }
              cout<<endl;
        }
      
    }
}
