#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int v = abs(x - y);

        long long ans = 0;
        // cout<<x-y<<":";
        for (int i = x; i > 0; i--)
        {
            if (i > x - y)
            {
                ans += (1 << i);
            }
            else
            {
                ans -= (1 << i);
            }
        }

        cout << ans << endl;
    }
}
