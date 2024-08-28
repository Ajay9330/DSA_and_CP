#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        int ans=0;
        while((x*x)<(a*b)){
            if(a>b){
                a=1;
            }else{
                b=1;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
}
