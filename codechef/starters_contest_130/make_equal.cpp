#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, a, b;
        cin >> n ;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            arr.push_back(v);
        }
        if(arr.back()!=arr[0]){
            cout<<"no"<<endl;
        }else{
            int fe=arr[0];
            bool f=1;
            for(auto i:arr){
                if(i<fe){
                    // cout<<i<<":";
                    cout<<"no"<<endl;
                    f=0;
                    break;
                }
            }
            if(f){
                cout<<"yes"<<endl;
            }
            
        }
    }
    return 0;
}
