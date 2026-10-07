#include <bits/stdc++.h>
using namespace std;

bool func(int x)
{
    string s = to_string(x);
    for (int i = 0 ; i < s.size() ; i++)
    {
        if (s[i] == '7')
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n ; cin >> n;
    for (int i = 7 ; i <= n ; i++)
     {
        if (func(i) == true || i % 7 == 0)
        {
            cout << i << endl;
        }
     }
    
    return 0;
    
}
