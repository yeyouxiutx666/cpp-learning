#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x , y ; cin >> x >> y ;
    int cnt = 0 ; int sum = 0 ;
    for (int i = x ; i <= y ; i++)
     {
        sum = 0 ;
        for (int j = 1 ; j < i ; j++)
         {
            if (i % j == 0)
             {
                sum += j ;
             }
         }
        if (sum == i)
         {
            cnt++ ;
         } 

     }
     cout << cnt << endl ;

    return 0;
    
}

