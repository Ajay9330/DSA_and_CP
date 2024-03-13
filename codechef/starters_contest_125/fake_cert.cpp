#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string a;
          int n;
       cin>>n>>a;
        int mxab=0;
        int curab=0;
        int p=0;
        for(auto i:a){
            if(i=='1'){
                p++;
                // cout<<i<<",";
                curab=0;
                
            }else{
                curab++;
                
            }
            mxab=max(mxab,curab);
            
        }
        // cout<<p<<endl<<"------";
        cout<<mxab+p<<endl;
    }
}
