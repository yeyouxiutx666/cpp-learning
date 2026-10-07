#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 0 ;
    // bool id = false;
    for (int i = 2 ; i <= n ; i++)
     {
        bool id = false ;
        for (int j = 2 ; j < i ; j++)
        {
            if (i % j == 0)
            {
                id = true; 
                break;
            }
        }
        if (id == false)
        {
            cnt++;
        }
     }
     cout << cnt << endl;

    return 0;
    
}

// 埃氏筛法
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << 0 << endl;
        return 0;
    }
    
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false; // 0和1不是质数
    
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            // 从i*i开始标记，避免重复操作
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    
    int cnt = 0;
    for (int i = 2; i <= n; i++)
        if (prime[i]) cnt++;
    
    cout << cnt << endl;
    return 0;
}

*/
