#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    string num = to_string(n) ;
    int cnt = 0 ;
    for (int i = 0 ; i < num.length() ; i++)
     {
        if ( num[i] != '0' )
         {
            cnt++ ;
         }
        else ;
         
     }
    cout << cnt << endl;

    return 0;
    
}
