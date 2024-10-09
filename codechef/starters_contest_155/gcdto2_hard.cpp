#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>n>>m;
        
        if(m+n==1){
            cout<<2<<endl;
        }
        int mn=min(m,n);
        int v=0;
        int f=1;
        for(int i=0;i<n;i++){
            f=1;
            for(int j=0;j<m;j++){
                if(j>=mn && i==0){
                    cout<<3<<" ";
                    continue;
                }
                if(f && j==v){
                    cout<<3<<" ";
                    f=0;
                    if(v==m-1){
                        continue;
                    }
                    v++;
                    
                }else{
                    cout<<2<<" ";
                }
            }
            cout<<endl;
        }
    }
}
