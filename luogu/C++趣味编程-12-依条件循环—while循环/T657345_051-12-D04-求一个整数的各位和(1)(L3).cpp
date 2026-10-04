#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m ; cin >> m ;
    string s = to_string (m) ;
    int res = 0 ;
    for (int i = 0 ; i < s.length() ; i++)
     {
        res += (s[i]-'0') ;
     }
    cout << res << endl;

    return 0;
    
}

/*
while版本
int main()
{
    int m, res=0;
    cin >> m;
    while(m>0){
        res += m%10;
        m /=10;
    }
    cout << res;
    return 0;
}

*/
