#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float x,y,z;
	    cin>>x>>y>>z;
        float v=x*y;
        
        int a=ceil((v-z)/y);
        if(v<=z){
            cout<<0<<endl;
        }else{
            cout<<a<<endl;
        }
	 
	}
}
