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
        sort(arr.begin(),arr.end());
        // cout<<arr[n-3]-arr[0]<<endl;
        int mn=min(arr[n-3]-arr[0],INT_MAX);
        mn=min(mn,arr[n-2]-arr[1]);
        mn=min(mn,arr[n-1]-arr[2]);
        cout<<mn<<endl;
    }
}
