#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k , s;
    cin >> k >> s;
    int cnt = 0 ;
    for (int i = 0 ; i <= k ; i++)
    {
        for (int j = 0 ; j <= k ; j++)
        {
            int x = s - i - j;
            if (x >= 0 && x <= k)
            {
                // cout << i << " " << j << " " << x << endl;
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
