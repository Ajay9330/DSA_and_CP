#include <iostream>

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, y;
        cin >> n >> k;
        long long ans=0;
        vector<int>arr;
        for (int i = 0; i < n; i++) {
            int v;
            cin>>v;
            arr.push_back(v);
            ans+=v;
       
        }
        unordered_map<int,int>mp;
        mp[3]=4;
        mp[1]=6;
        mp[2]=5;
        sort(arr.begin(),arr.end());
        for(int i=0;i<k;i++){
            if(arr[i]<=3){
                ans-=arr[i];
                ans+=mp[arr[i]];
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}