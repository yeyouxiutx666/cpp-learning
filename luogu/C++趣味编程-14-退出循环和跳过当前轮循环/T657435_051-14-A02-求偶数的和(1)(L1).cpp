#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int res = 0 ;
    int num ;
    for (int i = 0 ; i < n ; i++)
     {
        cin >> num ;
        if (num % 2 == 0) res += num ;
        else ;
        // cout << res << endl;
     }
    cout << res << endl;

    return 0;
    
}
