#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
        string s1,s2;
        cin>>s1>>s2;
        int mx=INT_MAX;
        for(int i=0;i<=n1-n2;i++){
            int curr=0;
            int c=i;
            for(int j=0;j<n2;j++){
                if(s1[c+j]!=s2[j]){
                    curr++;
                }
            }
            mx=min(curr,mx);
        }
        cout<<mx<<endl;
    }
}
