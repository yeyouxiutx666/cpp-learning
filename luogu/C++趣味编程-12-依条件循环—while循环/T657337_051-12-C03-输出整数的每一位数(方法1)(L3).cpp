#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    string num = to_string (n) ;
    int i = 1 ; int l = num.length() ;
    while ( i <= l)
     {
        cout << num[l - i] << " " ;
        i++ ;
     } 
    
     return 0;
    
}
