#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        float x,y;
        cin>>x>>y;
        float ans=0;
        ans=ceil((10*y-10*x)/(100-y));
        cout<<ans<<endl;
    }
}
