#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
            int n, k;
            cin >> n >> k;
            vector < string > s;
            for (int i = 0; i < n; i++) {
                string v;
                cin >> v;
                s.push_back(v);

            }
            unordered_map < int, bool > mp;
            for (auto j: s) {
                bool f = 1;
                int n = -1;
                for (int i = 0; i < k; i++) {

                    if (j[i] == '1') {
                        if (n != -1) {
                            f = 0;
                            break;
                        }
                        n = i;
                    }
                }
                if (f && n != -1) {
                    mp[n] = true;
                }


            }
            int f = 1;
            for (int i = 0; i < k; i++) {
                if (mp[i] == 0) {
                    f = 0;
                }
            }
            if (!f) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
     
        }
     
    }