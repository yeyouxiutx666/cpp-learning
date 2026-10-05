#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ; cin >> n >> m ;
    int arr[n] ; 
    for (int i = 0 ; i < n ; i++)
     {
        cin >> arr[i] ;
     }
    int res = 0 ;
    for (int i = 0 ; i < n ; i++)
     {
        res += arr[i] ;
     } 
    if (res >= m) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
    
}
