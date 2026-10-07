#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    double sum = 1.0 ; long long num = 1 ;
    double temp = 1.0 ;
    for (int i = 1 ; i <= n ; i++)
     {
        for (int j = 1 ; j <=i ; j++)
         {
            num *= j ;
            temp = 1.0 / num ;

         }
        
        sum += temp ;
        num = 1 ; temp = 1.0 ;

     }
    cout << fixed << setprecision(10) << sum << endl ;

    return 0;
    
}

