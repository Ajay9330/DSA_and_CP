#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        vector<int>v;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            v.push_back(val);
        }
        int difsum=0;
        bool f=1;
        vector<int>tem;
        int ans=0;
        int mx1=0,mx2=0,mx3=0;
        for(int i=0;i<n;i++){
             for(int j=0;j<n-1;j++){
                 if(j==i || j+1==i){
                     if(j==i){
                
                 mx1+=abs(1-v[j+1]);
                 mx2+=abs(k-v[j+1]);
                 mx3+=abs(v[j]-v[j+1]);
                   
                     }
                     if(j+1==i){
                 mx1+=abs(v[j]-1);
                 mx2+=abs(k-v[j]);
                 mx3+=abs(v[j]-v[j+1]);  
                         
                     }
                     continue;
                 }
                 mx1+=abs(v[j]-v[j+1]);
                 mx2+=abs(v[j]-v[j+1]);
                 mx3+=abs(v[j]-v[j+1]);
                 
                 
             }
             ans=max(ans,mx1);
             ans=max(ans,mx2);
             ans=max(ans,mx3);
             mx1=0;mx2=0;mx3=0;
        }
        
        cout<<ans<<endl;
    }
}
