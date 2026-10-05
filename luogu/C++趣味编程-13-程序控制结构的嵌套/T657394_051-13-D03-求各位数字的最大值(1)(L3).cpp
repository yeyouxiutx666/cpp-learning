#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    string s = to_string(n) ;
    int num = 0 ;
    int max_num = s[0] - '0' ;
    
    for (int i = 0 ; i < s.length() ; i++)
     {
        num = s[i] - '0' ;
        if (num > max_num) max_num = num ;
     }
    cout << max_num << endl;

    return 0;
    
}
