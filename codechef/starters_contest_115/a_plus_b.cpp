#include <bits/stdc++.h>
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
	    int m=n;
	    while(m--){
	        int v;
	        cin>>v;
	        a.push_back(v);
	    }
	    m=n;
	    unordered_map<int,int>mp;
	      while(m--){
	        int v;
	        cin>>v;
	        b.push_back(v);
	        mp[v]++;
	    }
	  sort(b.begin(),b.end(),greater<int>());
	  sort(a.begin(),a.end());
	  bool f=1;
	  int v=a[0]+b[0];
	    for(int i=0;i<n;i++){
	       // cout<<b[i]+a[i];
	       if(v==a[i]+b[i]){
	           continue;
	       }else{
	              f=0;break;
	       }
	    
	    }
	    if(f==0){
	        cout<<-1;
	    }else{
	        for(auto i:a){
	            cout<<i<<" ";
	        }
	        cout<<endl;
	         for(auto i:b){
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	    
	}

}
