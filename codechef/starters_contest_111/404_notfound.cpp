#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x*y/2 <z){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
