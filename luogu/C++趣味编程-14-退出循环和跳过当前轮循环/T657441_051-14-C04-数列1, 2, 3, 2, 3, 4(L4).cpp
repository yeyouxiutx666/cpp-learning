#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 数列1 2 3 2 3 4 3 4 5 4 5 6 ...
    /*
    分析:首先三个数字一组
         每一组最前面的数字为第几组
         如果n是3的倍数，整除3后为该组的最后一位，n/3+2
         如果n不能被3整除，所在组为(n/3+1)，所以应该为组数+n%3-1
         因为组数加一的时候已经在该组的第一个数字，加余数就要减去一
    */
    int n ; cin >> n ;
    if (n % 3 == 0) cout << n / 3 + 2 << endl;
    else cout << (n / 3 + 1) + n % 3 - 1 << endl;
     
    

    return 0;
    
}
