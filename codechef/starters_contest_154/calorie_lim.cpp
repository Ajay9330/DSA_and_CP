#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            arr.push_back(v);
        }
        // sort(arr.begin(),arr.end());
        int c=0;
        int i=0;
        while(k>0 && c!=arr.size()){
            if(k-arr[c]<0){
                break;
            }
                k-=arr[c];
            c++;
        }
        cout<<c<<endl;
    }
}
