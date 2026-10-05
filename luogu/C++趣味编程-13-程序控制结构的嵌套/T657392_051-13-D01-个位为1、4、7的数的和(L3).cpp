#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int cnt = 0 ;
    for (int i = 1 ; i <= n ; i++)
     {
        string s = to_string(i) ;
        if (s[s.length()-1] == '1' || s[s.length()-1] == '4' || s[s.length()-1] == '7')
         {
            cnt += i ;
         }
        // cout << s.length() << endl;
     }
    cout << cnt << endl;
    return 0;
    
}
