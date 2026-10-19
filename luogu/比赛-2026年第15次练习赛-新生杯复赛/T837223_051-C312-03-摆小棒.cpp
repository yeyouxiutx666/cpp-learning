#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ; cin >> n;
    // 数列 4 12 24 ，计算方法为(n+1)*n*2 ，再求前n项和
    long long num = 0 ;
    for (int i = 1 ; i <= n ; i++)
    {
        num += (long long)(i + 1) * i * 2 ;
    }
    cout << num << endl;

    return 0;
}
