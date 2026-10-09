#include <bits/stdc++.h>
using namespace std;

int main()
{
    //数列 1 1 2 1 2 3 1 2 3 4
    //规律为每组的第 i 个数为 1 到 i 的连续整数
    int n ; cin >> n ;
    int num = 0 ;
    int cnt = 1 ;
    while (n > 0)
    {
        n -= cnt ;
        cnt++ ;
    }
    // 组数 cout << cnt-1 << endl ;
    // 每组内第几项 cout << n + cnt-1 << endl ;
    
    for (int i = 1 ; i <= cnt-1 -1 ; i++)
    {
        num += (i*(i+1)/2);
    }

    //计算不足一组的和
    int res = 0 ;
    for (int i = 1 ; i <= n + cnt-1 ; i++)
    {
        res += i ;
    }

    cout << num + res << endl ;
    
    return 0;
    
}
