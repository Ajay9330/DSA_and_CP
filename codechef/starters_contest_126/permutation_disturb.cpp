#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<float,int>mp;
        int ans=0;
        int remain=0;
        for(int i=1;i<=n;i++){
            long long a;
            cin>>a;
            if(a==i){
                if(mp[i-1]!=0){
                    remain--; mp[i-1]=0;
                    ans++;
                }else if(mp[i+1]!=0){
                    remain--;mp[i+1]=0;
                    ans++;
                }else{
                    remain++;
                    mp[i]=i;
                }
            }
            
        }
        cout<<ans+remain<<endl;
    }
}
