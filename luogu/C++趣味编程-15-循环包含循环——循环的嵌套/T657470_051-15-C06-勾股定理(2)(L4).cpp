#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    bool flag = false ;
    for (int i = 1 ; i <= n ; i++)
     {
        for (int j = i ; j <= n ; j++)
         {
            int k = sqrt(i * i + j * j) ;
            if (k * k == i * i + j * j && k <= n)
             {
                cout << i << " " << j << " " << k << endl ;
                flag = true ;
             }
         }
    }
    if (!flag) {
        cout << "no answer" << endl;
    }

    return 0;
    
}

