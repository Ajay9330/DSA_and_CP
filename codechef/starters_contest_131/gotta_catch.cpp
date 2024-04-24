#include <iostream>

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        long long ans=0;
        for (int i = 0; i < n; i++) {
            int v;
            cin>>v;
            if(v*x<=y){
                ans+=v*x;
            }else{
                ans+=y;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}