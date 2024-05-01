#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>sbt;
        vector<int>sbl;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            sbt.push_back(v);
        }
         for(int j=0;j<m;j++){
            int v;
            cin>>v;
            sbl.push_back(v);
        }
        if(n<4 || m<4 || m+n<11){
            cout<<-1<<endl;
            continue;
        }
        long long ans=0;
        sort(sbl.begin(),sbl.end(),greater<int>());
        sort(sbt.begin(),sbt.end(),greater<int>());
        for(int i=0;i<=3;i++){
            ans+=sbt[i];
            ans+=sbl[i];
        }
        vector<int>secv;
        for(int i=4;i<m;i++){
            secv.push_back(sbl[i]);
        }
           for(int i=4;i<n;i++){
            secv.push_back(sbt[i]);
        }
        sort(secv.begin(),secv.end(),greater<int>());
        for(int i=0;i<3;i++){
            ans+=secv[i];
        }
        cout<<ans<<endl;

    }
}
