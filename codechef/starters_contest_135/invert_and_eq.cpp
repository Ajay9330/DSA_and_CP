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
        int x, y;
        char px, py;
        px = s[0];
        py = s[0];
        x = 0;
        y = 0;
        for (auto i: s) {
            if (px != i) {
                px = i;
                x++;
            }

        }
        if (x == 0 || x==1) {
            cout << x << endl;
        } else if (x <= 2) {
            cout << x - 1 << endl;
        } else {
            if (x % 2 == 0) {
                cout << x / 2 << endl;
            } else {
                x++;
                cout << x / 2 << endl;

            }
            // cout<<x-1<<endl;
        }
        // cout<<(x==0?0:x-1)<<endl;

    }
}