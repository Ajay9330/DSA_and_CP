#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>ar ;
	    int even0=0;
	    int odd1=0;
	    for(int i=1;i<=n;i++){
	        int s;
	        cin>>s;
	        if(s==0 ){
	            even0++;
	        }
	        if(s==1 ){
	            odd1++;
	        }
	        
	        ar.push_back(s);
	    }
	    cout<<min(even0,odd1)<<endl;
	}
	return 0;
}
