#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        float d,x,y;
        cin>>d>>x>>y;
     
        int c=0;
        while(y-c>=0){
            if((100-d*c)*x/100 <=(y-c)){
                // cout<<(100-d*c)*x/100<<endl;
                break;
            }
            c++;
        }
        if(c>y){
            cout<<-1<<endl;
            continue;
        }
        cout<<c<<endl;
    }
}
