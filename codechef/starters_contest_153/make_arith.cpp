#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(b-a==c-b){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }
    }
}
