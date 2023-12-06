#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    unordered_map<char,int>mp;
	    for(auto i:"AEOUI"){
	        mp[i]=1;
	    }
	    string s2="CODETOWN";
	    bool f=1;
	    for(int i=0;i<8;i++){
	        if(mp[s[i]]!=mp[s2[i]]){
	            f=0;
	        }
	    }
	    if(f){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
