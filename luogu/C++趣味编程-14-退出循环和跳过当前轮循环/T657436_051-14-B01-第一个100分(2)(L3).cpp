#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int res = 1 ;
    int num ;
    for (int i = 0 ; i < n ; i++)
     {
        cin >> num ;
        if (num == 100) break ;
        res++;
     }
    cout << res << endl;
    

    return 0;
    
}
