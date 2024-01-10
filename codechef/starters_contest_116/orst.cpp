#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a;
        vector<int>b;
        int mx=0;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            a.push_back(v);
     
        }
       for(int i=0;i<m;i++){
            int v;
            cin>>v;
            b.push_back(v);
                   mx=max(v,mx);
        }
        sort(a.end()-mx,a.end());
        for(auto i:a){
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
}
