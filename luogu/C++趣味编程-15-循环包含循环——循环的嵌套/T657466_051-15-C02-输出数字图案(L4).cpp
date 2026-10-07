#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    int num[n][n] ;
    for (int k = 1 ; k <= (n+1)/2 ; k++)
     {
        // up
        for (int j = k - 1 ; j <= n - k ; j++)
         {
            num[k - 1][j] = k ;
         }
        // down
        for (int j = k - 1 ; j <= n - k ; j++)
         {
            num[n - k][j] = k ;
         }
        // left
        for (int j = k - 1 ; j <= n - k ; j++)
         {
            num[j][k - 1] = k ;
         }
        // right
        for (int j = k - 1 ; j <= n - k ; j++)
         {
            num[j][n - k] = k ;
         }
     }
    for (int i = 0 ; i < n ; i++)
     {
        for (int j = 0 ; j < n ; j++)
         {
            cout << num[i][j] << " " ;
         }
        cout << endl ;
     }

    return 0;
    
}
