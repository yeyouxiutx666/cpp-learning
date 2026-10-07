#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int sum = 0 ; int num = 1 ;
    for (int i = 1 ; i <= n ; i++)
     {
        for (int j = 1 ; j <=i ; j++)
         {
            num *= j ;
         }
        
        sum += num ;
        num = 1 ;

     }
    cout << sum << endl ;

    return 0;
    
}

