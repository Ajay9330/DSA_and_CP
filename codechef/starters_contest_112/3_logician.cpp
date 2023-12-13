#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    bool l=1;
	    for(int i=0;i<n;i++){
	       if(s[i]=='0'){
	           l=0;
	       }
	       if(l&&s[i]=='1'&& i==n-1){
	           cout<<"YES"<<endl;
	       }else if(l&&s[i]=='1'){
	           cout<<"IDK"<<endl;
	       }else{
	           cout<<"NO"<<endl;
	       }
	    }
	}
	return 0;
}
