#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int>arr;
        for(int i=0;i<x;i++){
            int v;
            cin>>v;
            arr.push_back(v);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        long long ans=0;
        int i=0;
        int j=x;
        bool f=1;
        // while(i<j){
        //     cout<<arr[i];
        //     if(f){
        //           cout<<arr[i];
        //         ans+=arr[i];
        //         i++;
        //         f=0;
        //     }else{
        //           cout<<arr[j];
        //         ans-=arr[j];
        //         f=1;
        //         j--;
        //     }
        // }
        for(int i=0;i<x;i++){
            if(i <(x+1)/2){
                ans+=arr[i];continue;
                
            }else{
                ans-=arr[i];
            }
            
        }
        cout<<ans<<endl;
    }
}
