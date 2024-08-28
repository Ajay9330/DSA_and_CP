#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int>arr;
        long long sm=0;
        int c=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            if(v<0){
                c++;
            }
             sm+=abs(v);
            //  if(v==0)continue;
            arr.push_back(abs(v));
           
        }
        sort(arr.begin(),arr.end());
        if(c%2==1){
            sm-=2*arr[0];
        }
        cout<<sm<<endl;
        
        
    }
}
