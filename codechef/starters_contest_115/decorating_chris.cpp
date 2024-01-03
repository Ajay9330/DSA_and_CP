#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;

    while(t--){
        int n,x,y;
           cin>>n>>x>>y;
        //   cout<<(x+(y/3))/2<<endl;
            y=y/3;
            
          n=n-min(x,y);
          x=x-min(x,y);
          n=n-x/2;
          if(n<=0){
              cout<<"YES"<<endl;
          }else{
              cout<<"NO"<<endl;
          }
        
    }
}
