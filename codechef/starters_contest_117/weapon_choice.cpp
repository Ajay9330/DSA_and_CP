#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    int cont=0;
	    int tem=a;
	    
	    if(a<=e*c){
	        if(a%c==0){
            cont=a/c;
                }else{
                  cont=a/c;
                 cont++;
             }
	    }else{
	        int l=a-c*e;
	        if(l%d==0){
        cont=l/d;
    }else{
        cont=l/d;
        cont++;
    }cont+=e;
	        
	    }
	    int m;
	    
// 	  cout<<cont<<":"<<ceil(1.0*tem+1)/b<<":";
    if(tem%b==0){
        m=tem/b;
    }else{
        m=tem/b;
        m++;
    }
    // cout<<cont<<":"<<m<<",,,";
	    cout<<min(cont,m)<<endl;
	}

}
