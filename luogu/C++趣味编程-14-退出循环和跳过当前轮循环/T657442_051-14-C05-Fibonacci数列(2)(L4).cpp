#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int f1 = 1 ; int f2 = 1 ;
    int f = 0 ;
    int i = 3 ;
    while (true)
     {
        f = f1 + f2 ;
        f1 = f2 ; f2 = f ;
        // cout << "第" << i << "项" << f << endl;
        if (f > n) break;
        i++;
     }
    cout << f << " " << i << endl;

    return 0;
    
}
