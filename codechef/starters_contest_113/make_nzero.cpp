#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int b;
        cin >> b;

        if (b % 3 == 0 || b % 4 == 0) {
            cout << "YES" << endl;
        } else {
           
            bool possible = false;
            for (int i = 0; 3 * i <= b; ++i) {
                if ((b - 3 * i) % 4 == 0) {
                    possible = true;
                    break;
                }
            }

            if (possible) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
