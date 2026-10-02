#include <bits/stdc++.h>
using namespace std;


int main()
{
    int m , n ;
    cin >> m >> n;
    auto y = (n - 2*m) / 2.0 ;
    auto x = m - y ;
    if ((n - 2*m) % 2 != 0 || n < 2*m)
    {
        cout << "invalid" << endl;
    }
    else
    {
        cout << x << " " << y << endl;
    }


    return 0;
}
