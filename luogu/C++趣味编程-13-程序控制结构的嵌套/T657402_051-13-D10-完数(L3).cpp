#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int num = 0 ;
    for (int i = 1 ; i < n ; i++)
     {
        if (n % i == 0) num += i ;
     }
    // cout << num << endl;
    if (num == n) cout << "YES" << endl;
    else cout << "NO" << endl; 

    return 0;
    
}
