#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c,m;
        cin>>a>>b>>c>>m;
        if(abs(a-b)<=m || abs(a-c)<=m || abs(b-c)<=m){
            cout<<"YES"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
