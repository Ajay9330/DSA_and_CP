#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int mx=0;
        int p=0;
        for(int i=0;i<22;i++){
            
                int a,b;
                 cin>>a>>b; 
                //  mx=max(a,b*20);
                 if(mx<a+b*20){
                     mx=a+b*20;
                     p=i;
                 }
        }
        
        cout<<p+1<<endl;
        
    }
}
