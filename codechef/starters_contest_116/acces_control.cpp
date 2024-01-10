#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        int swipe=0;
        bool f=0;
        for(auto i:s){
            if(i=='0'){
                swipe--;
            }else{
                swipe=x;
            }
            if(swipe<0){
                f=1;
            }
        }
        if(f){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
