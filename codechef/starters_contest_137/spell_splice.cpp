#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        // vector<int>a;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            int o;
            cin>>o;
            v.push_back({m,o});
        }
        //  for(int i=0;i<n;i++){
        //     int m;
        //     cin>>m;
        //     a.push_back(m);
        // }
        sort(v.begin(),v.end());
        int mx=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                  mx=max(v[i].first * v[j].second+v[j].first*v[i].second,mx);
            }


        }
        cout<<mx<<endl;
    }
}
