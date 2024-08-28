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
        int i=0,j=n-1;
        long long sm=0;
        while(arr[i]<=0)i++;
        while(arr[j]<=0)j--;
        int c=0;
        for(int k=i;k<=j;k++){
            if(arr[k]<0){
                c++;
                continue;
            }
            sm+=arr[k];
        }
        cout<<c<<endl;
    }
}
