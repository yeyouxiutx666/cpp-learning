#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n ;
    cin >> n ;
    if (n/7 == 0  || n == 7)
    {
        cout << 1 << " " << n << endl;
    }
    else
    {
        if (n%7 == 0)
        {
            cout << n / 7  << " " << 7 << endl;
        }
        else
        {
            cout << n / 7 + 1 << " " << n % 7 << endl;
        }
    }

    return 0;
}
