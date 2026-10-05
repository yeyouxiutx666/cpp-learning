#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , b ; cin >> a >> b ;
    int cnt = 0 ;
    for (int i = a ; i <= b ; i++)
     {
        if (i % 8 == 0 || i % 10 == 8) cnt++ ;
     }
    cout << cnt << endl; 

    return 0;
    
}
