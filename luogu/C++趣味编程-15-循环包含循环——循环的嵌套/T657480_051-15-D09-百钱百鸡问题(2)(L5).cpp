#include <bits/stdc++.h>
using namespace std;

int main()
{
    //公鸡5块 母鸡3块 小鸡一块三只，m块可以买m只鸡，求解
    int m;
    cin >> m;
    vector<pair<int, int>> result;
    
    for (int i = 0; i <= m / 5; i++)
    {
        for (int j = 0; j <= m / 3; j++)
        {
            int k = m - i - j;
            if (k >= 0 && k % 3 == 0 && (5 * i + 3 * j + k / 3) == m)
            {
                result.push_back({i, j}); // 存入一组解
            }
        }
    }
    
    // 全部找完后，统一输出
    if (result.empty())
    {
        cout << "no answer" << endl;
    }
    else
    {
            int k = m - result[0].first - result[0].second;
            cout << result[0].first << " " << result[0].second << " " << k << endl;
    }

    return 0; 
}
