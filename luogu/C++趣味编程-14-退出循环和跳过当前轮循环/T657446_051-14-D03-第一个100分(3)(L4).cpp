#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int grade = 0 ; int t = 0 ;
    for (int i = 1 ; i <= n ; i++)
     {
        cin >> grade ;
        if (grade == 100)
         {
            cout << i << endl;
            break;
         }
        t = i + 1 ; 
        // cout << t << endl;
     }
    if (t == n + 1) cout << "no" << endl;

    return 0;
    
}
