#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m ; cin >> m ;
    int i = 0 ;
    while (m >= 0)
     {
        i++ ;
        m -= 8 ;
        
     }
    cout << i-1 << " " << m + 8 << endl; 

    return 0;

    
}
