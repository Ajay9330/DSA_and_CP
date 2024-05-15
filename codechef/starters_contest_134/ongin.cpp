#include <bits/stdc++.h>
using namespace std;

long long digitRootSum(long long n) {
    long long full_sets = n / 9;
    long long remainder = n % 9;

    long long sum_full_sets = full_sets * 45;
    long long sum_remainder = (remainder * (remainder + 1)) / 2;

    return sum_full_sets + sum_remainder;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << digitRootSum(n) << '\n';
    }
    return 0;
}
