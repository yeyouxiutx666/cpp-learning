#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n ;
    int arr[n] ; 
    for (int i = 0 ; i < n ; i++)
     {
        cin >> arr[i] ;
     }
    int res = 0 ;
    for (int i = 0 ; i < n ; i++)
     {
        if (arr[i] >= 95) res++ ;
        else ;    
     } 
    if (n % 2 == 0)
     {
        if (res >= n/2) cout << "yes" << endl;
        else cout << "no" << endl;
     }
    else 
     {
        if (res > n/2) cout << "yes" << endl;
        else cout << "no" << endl;
     }

    return 0;
    
}
