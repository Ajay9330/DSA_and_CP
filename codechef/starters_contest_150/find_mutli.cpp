#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        multiset<int> arr;
        for (int i = 0; i < n; i++) {
            int v;
            cin >> v;
            arr.insert(v);
        }
        for (int j = 0; j < k; j++) {
            int min_val = *arr.begin();
            int max_val = *arr.rbegin();
            arr.erase(arr.begin());
            arr.erase(prev(arr.end()));
            arr.insert(min_val + max_val);
        }
        for (auto i : arr) {
            cout << i << " ";
        }
        cout << endl;
    }
}
