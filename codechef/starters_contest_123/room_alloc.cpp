#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s=0;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            s+=(v-1)/2;
        }
        cout<<s+n<<endl;
    }
}
