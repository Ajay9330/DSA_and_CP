#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        long long p=1;
        while(1){
            if(p==x){
                p=2*x;
                break;
            }
            if(p>=x){
                break;
            }
            p*=2;
        }
        cout<<2*x-p<<endl;
    }
}
