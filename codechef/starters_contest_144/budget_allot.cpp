#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a;
        long long b=0;
        int c=0;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            if(v<x){
                a.push_back(x-v);
            }else{
                b+=(v-x);
                c++;
            }
        }
        sort(a.begin(),a.end());
        for(auto i:a){
            if(i<=b){
                c++;
                b-=i;
            }
        }
        cout<<c<<endl;
        
    }
}
