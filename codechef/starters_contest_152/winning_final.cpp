#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int m,p;
        cin>>m>>p;
        int tem=m;
        int c=0;
        int tp=p+20*(c)+m+c;
        // cout<<tp<<",";
        while(m+c<300 && tp<=1000){
            c++;
            tp=p+20*(c)+m+c;
            // cout<<tp<<endl;
        }
                    // cout<<tp<<endl;

        cout<<c-1<<endl;
    }
}
