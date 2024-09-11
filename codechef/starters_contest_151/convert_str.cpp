#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int c=0;
         int ans=0;
        for(auto i:s){
            if(i=='1')c++;
        }
        c=min(c,n-c);
        if(c==0){
            // cout<<ans--;
            ans--;
        }
       
        for(int i=c;i<=n;i++){
            if((i-c)%2==0){
                ans++;   
            }else{
                if(i-(n-c)>=0 && (i-(n-c))%2==0){
                    ans++;
                }
            }
            
            
        }
        
        cout<<ans<<endl;
    }
}
