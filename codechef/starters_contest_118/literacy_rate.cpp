#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t ;
    cin>>t;
    while(t--){
        float a,b;
        cin>>a>>b;
        cout<<((b*100/a )>=75?"YES":"NO")<<endl;
    }
}
