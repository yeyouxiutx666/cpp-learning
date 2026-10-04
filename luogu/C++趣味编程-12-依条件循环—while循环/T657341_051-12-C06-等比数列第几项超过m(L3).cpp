#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a1 , q , m ; cin >> a1 >> q >> m ;
    long i = 1 ;
    while (a1 <= m)
     {
        a1 = a1 * q ;
        i++ ;
        //cout << a1 << " " << i << endl;
     }
    cout << a1 << " " << i << endl;

    return 0;

    
}
