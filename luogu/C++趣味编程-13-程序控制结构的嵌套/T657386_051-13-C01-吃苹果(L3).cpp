#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int days = 0 ;
    while (n > 0)
     {
        if (n % 2 == 0)
         {
            if ( (n / 2) % 2 != 0 )
             {
                n = (n / 2) - 1 ;
             }
            else 
             {
                n = n / 2 ;
             }
         }
        else ; 
        
        days++;
        // cout << days << " " << n << endl ;
     }
    cout << days << endl;

    return 0;
    
}
