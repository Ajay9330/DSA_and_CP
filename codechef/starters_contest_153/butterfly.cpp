#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, g, b;
        cin >> r >> g >> b;

        int tot = r + g + b;
        int mx = max({r, g, b});

        if (mx <= tot / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
