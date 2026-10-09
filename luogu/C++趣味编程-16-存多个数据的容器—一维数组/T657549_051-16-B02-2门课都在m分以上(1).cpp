#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int arr[2*n] ;
    for (int i = 0 ; i < 2*n ; i++)
    {
        cin >> arr[i] ;
    }
    int m ; cin >> m ;
    int cnt = 0 ;
    for (int i = 0 ; i < 2*n ; i += 2)
    {
        if (arr[i] >= m && arr[i+1] >= m)
        {
            cnt++ ;
        }
    }
    cout << cnt << endl ;

    return 0;
}
