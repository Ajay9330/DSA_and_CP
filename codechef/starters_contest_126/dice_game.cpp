#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        

        if(n%2==0){
                    cout << (n+1)/2 + (2*6*(n/2))<< endl;

        }else{
            n--;
                    cout << (n+1)/2 + (2*6*(n/2))+6<< endl;

        }
        
    }
    
    return 0;
}
