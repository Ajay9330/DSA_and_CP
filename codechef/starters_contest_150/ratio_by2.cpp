#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>=2*b || b>=2*a){
            cout<<0<<endl;
            continue;
        }
        int mn=min(a,b);
        int mx=max(a,b);
        int c=0;
        while(mn*2>mx){
            mn--;
            c++;
        }
        cout<<c<<endl;
        
    }
}
