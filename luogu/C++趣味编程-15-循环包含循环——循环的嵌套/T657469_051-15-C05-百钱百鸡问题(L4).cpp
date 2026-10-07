#include <bits/stdc++.h>
using namespace std;

int main()
{
    //公鸡5块 母鸡3块 小鸡一块三只，m块可以卖m只鸡，求解
    int m ; cin >> m ;
    bool flag = false ;
    for (int i = 0 ; i <= m / 5 ; i++)
     {
        for (int j = 0 ; j <= m / 3 ; j++)
         {
            int k = m - i - j ;
            if (k >= 0 && k % 3 == 0 && (5 * i + 3 * j + k / 3) == m)
             {
                cout << i << " " << j << " " << k << endl;
                flag = true ;
             }
         }
         
         
     }
    if (!flag) {
            cout << "no answer" << endl;
         } 

    return 0;
    
}

