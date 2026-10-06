#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int num = 0 ;
    int res = 0 ;
    for (int i = 0 ; i < n ; i++)
     {
        cin >> num ;
        if (num % 2 == 0) res += num ;
        else continue ;
     }
    cout << res << endl; 
    

    return 0;
    
}
