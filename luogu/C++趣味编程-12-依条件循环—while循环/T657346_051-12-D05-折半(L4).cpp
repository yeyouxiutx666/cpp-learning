#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m ; cin >> m ;
    int i = 0 ;
    //double num = m ;
    while (m > 0)
     {
        m = m / 2.0 ;
        i++ ;
     }
    cout << i << endl;

    return 0;
    
}
