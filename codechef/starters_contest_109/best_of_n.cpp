#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	     
	    int s,t;
	    cin>>s>>t;
	    int c=max(s,t);
	    int a=abs(s-t);
	    a+=s+t;
	    if(a%2!=0){
	        cout<<a<<endl;
	    }else{
	        	    cout<<a-1<<endl;
	    }
	  

	    
	}
	return 0;
}
