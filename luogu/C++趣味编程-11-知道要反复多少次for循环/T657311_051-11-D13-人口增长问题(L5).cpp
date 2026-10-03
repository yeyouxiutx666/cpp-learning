#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x , n ;
    cin >> x >> n ;
    double p = x ;
    for (int i = 0 ; i < n ; i++)
     {
        p = p * 1.001 ;
     }
     cout << fixed << setprecision (4) << p << endl ;
    
    return 0;
}
