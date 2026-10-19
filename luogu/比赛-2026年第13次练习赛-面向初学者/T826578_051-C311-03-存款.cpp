#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int m , p , t ;
    cin >> m >> p >> t ;
    int cnt = 0 ;
    while (m < t)
    {
        m = m * (1 + p / 100.0) ;
        cnt++ ;
    }
    cout << cnt << endl;

    return 0;
}
