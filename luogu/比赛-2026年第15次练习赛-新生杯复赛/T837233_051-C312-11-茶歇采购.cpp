#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    long long ans = 0;

    for (int x = 0; a * x <= n; x++)
    {
        for (int y = 0; a * x + b * y <= n; y++)
        {
            int rem = n - a * x - b * y;
            if (rem % c == 0) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
