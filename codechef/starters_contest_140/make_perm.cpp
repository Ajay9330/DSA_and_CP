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
        bool f=1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            
            // cout<<arr[i]<<",";
            if((i+1)<arr[i]){
                f=0;
                break;
            }
        }
        if(f){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
