#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        vector<int>ans;
        int tem=a/b;
        // cout<<tem<<endl;
       int curr=tem;
        while(b--){
            ans.push_back(curr);
                cout<<curr<<" ";
            curr+=tem;
        
        }
        cout<<endl;
    }
}
