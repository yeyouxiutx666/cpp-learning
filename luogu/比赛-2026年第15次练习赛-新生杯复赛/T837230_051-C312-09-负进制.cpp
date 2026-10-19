#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        long long n;
        int b;
        cin >> n >> b;

        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }

        long long base = -b;
        string ans;

        while (n != 0)
        {
            int r = (int)(n % base);
            n /= base;

            if (r < 0)
            {
                r += b;
                n += 1;
            }

            if (r < 10) ans.push_back(char('0' + r));
            else ans.push_back(char('A' + r - 10));
        }

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}
