#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int cnt = 0 ;
    for (int i = 0 ; n != 1 ; i++)
     {
        if (n % 2 == 0) n = n / 2 ;
        else n = n * 3 + 1 ;
        cnt++ ;
        // cout << cnt << " " ;
     }
    cout << cnt << endl;

    return 0;
    
}
