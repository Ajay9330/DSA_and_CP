#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        char c = ' ';
        int a = 0;
        string ans;
       int prv=1;
        for (auto i: s) {
            // cout<<c<<",";
            if (i == 'R') {
                if (c == 'P') {
                    c = 'R';
                    if(prv==-1){
                        a++;
                        c='P';
                        prv=1;
                          continue;
                    }
                    prv=-1;
                  
                }else{
                    prv=1;
                    a++;
                    c='P';
                    continue;
                }
            } else if (i == 'S') {
                if (c == 'R') {
                    c = 'S';
                    if(prv==-1){
                        a++;
                        c='R';
                        prv=1;
                          continue;
                    }
                    prv=-1;
                  
                } else {
                    prv=1;
                    c = 'R';
                    a++;
                    continue;
                } 
                // ans.push_back('R');
            }else {
                 if(c=='S'){
                    //  a++;
                     c='P';
                    if(prv==-1){
                        a++;
                        c='S';
                        prv=1;
                          continue;
                    }
                    prv=-1;
                 }else{
                     prv=1;
                     a++;
                     c='S';
                 }
                }
        }
                    // cout<<c<<",";

        cout << a<< endl;
    }
}