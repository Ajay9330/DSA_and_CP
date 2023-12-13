#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a;
	    vector<int>b;
	    unordered_map<int,int>mp;
	    
	    
	    for(int i=0;i<n;i++){
	        int h;
	        cin>>h;
	        a.push_back(h);
	        mp[h]=-1;
	    }
	    for(int i=0;i<n;i++){
	        int h;
	        cin>>h;
	        b.push_back(h);
	    }
	    int sum=0;
	    for(int i=0;i<n;i++){
	        if(b[i]<=0){
	            continue;
	        }
	        if(mp[a[i]]==-1){
	            sum+=b[i];
	            mp[a[i]]=b[i];
	        }else{
	            if(mp[a[i]]<b[i]){
	                sum+=b[i]-mp[a[i]];
	                mp[a[i]]=b[i];
	            }
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
