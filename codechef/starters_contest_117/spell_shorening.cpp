#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int i=0;
        for( i=0;i<n-1;i++){
            if(s[i]>s[i+1]){
                s.erase(i,1);
                break;
            }
        }
        if(i==n-1){
            s.erase(n-1,1);
            cout<<s<<endl;
        }else{
                        cout<<s<<endl;
        }
    }
}
