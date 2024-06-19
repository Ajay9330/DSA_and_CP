#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(m/n){
            cout<<min((m%n),((m/n)+1)*n-m)<<endl;
        }else{
            cout<<n-m<<endl;
        }
    }
}
