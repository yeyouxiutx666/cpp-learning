#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
long long x[MAXN], y[MAXN];
bool used[MAXN];

int main()
{
    int n;
    cin >> n;

    long long x0, y0;
    cin >> x0 >> y0;

    for (int i = 1; i <= n; i++) cin >> x[i] >> y[i];

    for (int step = 0; step < n; step++)
    {
        int best = -1;
        long long bestD = LLONG_MAX;

        for (int i = 1; i <= n; i++)
        {
            if (used[i]) continue;
            long long dx = x[i] - x0;
            long long dy = y[i] - y0;
            long long d = dx * dx + dy * dy;
            if (d < bestD) { bestD = d; best = i; }
        }

        used[best] = true;
        cout << best << (step == n - 1 ? '\n' : ' ');
        x0 = x[best];
        y0 = y[best];
    }
    return 0;
}
