#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int p=n/(k+1);
	    cout<<p+(n-p*(k+1))<<endl;
	}
	return 0;
}
