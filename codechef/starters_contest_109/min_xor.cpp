#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int c=n;
	    int ar[n+1];
	    int x=0;
	    while(n--){
	        cin>>ar[c-n];
	        x^=ar[c-n];
	    }
	   // cout<<x<<",";
	   // cout<<(x^3)<<endl;
	   // int m=x;
	   // for(auto i:ar){
	   //     if(abs(x-i)<)
	   // }
	   int ans=x;
	   for(int i=1;i<=c;i++){
	       //cout<<(x^ar[i])<<","<<ar[i]<<":";
	       if((x^ar[i])<ans){
	           ans=x^ar[i];
	       }
	   }
	   cout<<ans<<endl;
	}
	return 0;
}
