#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n1;
        cin>>n1;
        long long mn=INT_MAX;
        vector<int>arr;
        unordered_map<int,int>mp;
        for(int i=0;i<n1;i++){
           int v;
           cin>>v;
           mp[v]++;
           arr.push_back(v);
    
        }
        long long c=0;
        for(auto i:mp){
            long long l=1ll*i.first*(n1-i.second);
            mn=min(mn,l);
        }
        cout<<min(mn,1ll*n1)<<endl;
    }
}
