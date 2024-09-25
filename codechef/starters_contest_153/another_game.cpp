#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            arr.push_back(v);
        }
        long long mx=0;
        long long ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(i+1!=arr[i]){
                mx=max(mx,arr[i]*1ll);
                // cout<<i<<endl;
                // ans=min(m)
            }
        }
        if(mx==0){
            cout<<0<<endl;
        }else{
                    cout<<mx+1<<endl;
        }
    }
}
