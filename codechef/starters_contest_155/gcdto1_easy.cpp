#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> s(int l) {
    vector<bool> p(l + 1, true);
    vector<int> r;
    p[0] = p[1] = false;

    for (int i = 2; i * i <= l; i++) {
        if (p[i]) {
            for (int j = i * i; j <= l; j += i) {
                p[j] = false;
            }
        }
    }

    for (int i = 2; i <= l; i++) {
        if (p[i]) {
            r.push_back(i);
        }
    }

    return r;
}

int main() {
    int t;
    cin >> t;

    int tn = 1000000;
    int l = tn * (log(tn) + log(log(tn)));
    l = max(l, 15);

    vector<int> pr = s(l);

    while (pr.size() < tn) {
        l *= 2;
        pr = s(l);
    }

    while (t--) {
        int m, n;
        cin >> m >> n;

        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {
                cout << pr[j * n + k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
