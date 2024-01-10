#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
  
    while(t--){
          bool h=0;
          char p='!';
          int c=0;
        for(int i=0;i<6;i++){
                  char a;
                 cin>>a;
                 if(a==p && p=='W'){
                     c++;
                 }else if(a=='W'){
                     c=1;
                 }else{
                     c=0;
                 }
                 if(c>=3){
                     h=1;
                 }
                 p=a;
        }
        if(h){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
  
        
    }
}
