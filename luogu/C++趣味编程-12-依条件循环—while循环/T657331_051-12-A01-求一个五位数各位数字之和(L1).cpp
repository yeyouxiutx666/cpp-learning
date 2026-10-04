#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num ;
    cin >> num ;
    string s_num = to_string(num) ;
    int res = 0 ;
    for (int i = 0 ; i < 5 ; i++)
     {
        res += ((int)(s_num[i])-'0') ;
        
     }
    cout << res << endl; 

    return 0;

    
}
