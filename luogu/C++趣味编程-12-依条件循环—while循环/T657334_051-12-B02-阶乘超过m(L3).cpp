#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m ;
    cin >> m ;
    int num = 1 ;
    int i = 0 ;
    while ( num < m )
     {
        i++;
        num *= i ;
        
     }
    cout << i << endl;
    return 0;

    
}
