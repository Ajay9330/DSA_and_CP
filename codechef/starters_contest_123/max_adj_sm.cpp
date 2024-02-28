#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>s;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            s.push_back(v);
        }
        
        sort(s.begin(),s.end());
        long long ans=0;
        
        for(int i=1;i<n-1;i++){
            ans+=s[i]+s[i+1];
        }
        ans+=s[0]+s[n-1];
        
        cout<<ans<<endl;
    }
}
