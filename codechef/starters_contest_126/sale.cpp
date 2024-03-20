#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long  presale = 0;
        long long mx = 0;
        for (int i = 0; i < n; i++) {
            long long  a;
            cin >> a;
            mx = max((presale + a * 2), mx);  // Corrected line
            presale += a;
        }
        cout << mx << endl;
    }
    return 0;
}
