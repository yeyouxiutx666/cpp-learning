#include <bits/stdc++.h>
using namespace std;

bool iszs(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n ; cin >> n;
    int res = 0 ;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && iszs(i))
        {
           res = i ;
        }
    }
    cout << res << endl;


    return 0;
}
