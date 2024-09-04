#include <bits/stdc++.h>
using namespace std;

long long calsm(long long v){
    // if(v<=0)return 0;
    long long sm=(v*(1+v))/2;
    return sm;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int mx=0;
	    int z=0;
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++){
	        int v;
	        cin>>v;
	        if(v==0){
	            z++;
	            continue;
	        }
	        mp[v]++;
	    }
	    long long ans=0;
	    for(auto i:mp){
	        ans+=calsm(i.second-1);
        //     cout<<ans<<":";
	       // cout<<i.second<<":";
	        mx=max(mx,i.second);
	    }
	    ans-=calsm(mx-1);
	    ans+=calsm(mx+z-1);
	   // cout<<calsm(mx+z-1)<<",";
	    cout<<ans<<endl;
	}

}
