#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int db=x;
        int pls=x;
        for(int i=1;i<=y;i++){
            if(x>1000){
                x*=2;
            }else{
                x+=1000;
            }
        }
        cout<<x<<endl;
    }
}
