#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int t = 0 ;
    for (int i = 2 ; i < n ; i++)
     {
        if (n % i == 0) t++;
     }
    if (t==0) cout << "yes" << endl;
    else cout << "no" << endl;
    

    return 0;
    
}
