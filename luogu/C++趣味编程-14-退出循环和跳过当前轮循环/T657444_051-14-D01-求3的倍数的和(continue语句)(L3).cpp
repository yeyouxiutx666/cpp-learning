#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ; cin >> n >> m ;
    int num = 0 ;
    for (int i = n ; i <= m ; i++)
     {
        if (i % 3 == 0) num += i ;
     }
    cout << num << endl;

    return 0;
    
}
