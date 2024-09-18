#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long mHD(int n, int m, vector<string>& strs) {
    long long tHD = 0;

    for (int j = 0; j < n; ++j) {
        long long c0 = 0, c1 = 0, cQ = 0;

        for (const string& s : strs) {
            if (s[j] == '0') c0++;
            else if (s[j] == '1') c1++;
            else cQ++;
        }

        long long mn = min(c0, c1);
        long long mx = max(c0, c1);

        if (cQ == 0) {
            tHD += (mn * mx);
            continue;
        }

        if (mx != mn) {
            if (cQ <= (mx - mn)) {
                mn += cQ;
                cQ = 0;
            } else {
                cQ -= (mx - mn);
                mn = mx;
            }
        }

        mn += cQ / 2;
        mx += cQ / 2;
        mn += cQ % 2;

        tHD += (mn * mx);
    }

    return tHD;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;

        vector<string> strs(m);
        for (int i = 0; i < m; ++i) {
            cin >> strs[i];
        }

        long long res = mHD(n, m, strs);
        cout << res << endl;
    }

    return 0;
}
