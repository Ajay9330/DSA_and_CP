#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        float x,y;
        cin>>n>>x>>y;
        float ans=0;
        if(x*2<=y){
            ans+=(n/2)*y;
        }else{
            ans+=(n/2)*2*x;
        }
        n%=2;
        ans+=n*x;
        cout<<ans<<endl;
    }
}
