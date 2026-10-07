#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m; cin >> n >> m;
    for (int i = n ; i <= m ; i++)
     {
        for (int j = n ; j <= m ; j++)
         {
            if (i % j == 0 && j != i)
             {
                cout << i << " " << j << endl;
             }
         }
     }
    

    return 0;
    
}
