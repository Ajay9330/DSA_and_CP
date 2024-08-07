#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        vector<int>arr(16,0);
        unordered_map<int,int>mp;
        vector<int>ans(16,1);
        for(int i=0;i<16;i++){
            int v;
            cin>>v;
            arr[i]=v;
            mp[v]=i;
        }
        sort(arr.begin(),arr.end());
        ans[mp[arr[0]]]=0;
        ans[mp[arr[15]]]=4;
        for(int i=3;i<7;i++){
            ans[mp[arr[i]]]=2;
        }
        for(int i=7;i<=14;i++){
            ans[mp[arr[i]]]=3;
        }
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
        
        
    }
}
