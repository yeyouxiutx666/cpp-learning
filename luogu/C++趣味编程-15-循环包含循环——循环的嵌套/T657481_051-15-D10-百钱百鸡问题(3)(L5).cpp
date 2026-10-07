#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    // 公鸡从小到大枚举，保证第一个解公鸡最少
    for (int i = 0; i * 5 <= m && i <= n; i++)
    {
        // 同公鸡数下，母鸡从小到大枚举，保证第一个解母鸡最少
        for (int j = 0; i * 5 + j * 3 <= m && i + j <= n; j++)
        {
            int k = n - i - j;
            // 小鸡数量非负、是3的倍数、总钱数匹配
            if (k >= 0 && k % 3 == 0 && 5 * i + 3 * j + k / 3 == m)
            {
                cout << i << " " << j << " " << k << endl;
                return 0; // 找到最优解直接结束
            }
        }
    }

    // 所有情况都枚举完仍无解
    cout << "no answer" << endl;
    return 0;
}
