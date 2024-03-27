#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>=10+b){
            cout<<0<<endl;
        }else{
            int ans=(b+10-a)/3;
            if((b+10-a)%3!=0){
                ans++;
            }
            cout<<ans<<endl;
        }
    }
}
