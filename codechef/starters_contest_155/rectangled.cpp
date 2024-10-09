#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l=n/4;
        int b=l+(n%4)/2;
        cout<<l*b<<endl;
    }
}
