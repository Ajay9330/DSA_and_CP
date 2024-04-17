#include <iostream>
using namespace std;

int reverseDigits(int num) 
{ 
    int rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
} 

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int  a, b;
        cin  >> a >> b;
        int ra,rb;
        if(a>b){
            cout<<"yes"<<endl;
        }else{
            ra=reverseDigits(a);
            rb=reverseDigits(b);
            if(ra>rb || ra>b || a>rb || a>b){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}
