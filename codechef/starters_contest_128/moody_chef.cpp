#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,l,r;
	    cin>>n>>l>>r;
	    vector<int>arr;
	    int h=0;
	    int mx=0;
	    int mn=0;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        if(a>=l && a<=r){
	            h+=1;
	        }else{
	            h-=1;
	        }
	        mx=max(mx,h);
	        mn=min(mn,h);
	        arr.push_back(a);
	    }
	    cout<<mx<<" "<<mn<<endl;
	}

}
