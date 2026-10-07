#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ; cin >> n >> m ;
    int res = 0 ;
    for (int i = 0 ; i < m ; i++)
     {
        for (int j = 0 ; j < n ; j++)
        {
            int num ; cin >> num;
            res += num ;
        }
     }
    cout << res << endl ;
    

    return 0;
    
}
