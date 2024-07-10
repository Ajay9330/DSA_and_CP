#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(y+1==x || x+1==y || x+2==y || x+1==y+1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
