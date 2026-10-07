#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ; cin >> n >> m ;
    int num ; int res = 0 ;
    for (int i = 0 ; i < m*n ; i++)
     {
        cin >> num ;
        res += num ;
        // cout << res << endl ;
     }
    cout << res << endl ; 
    

    return 0;
    
}
