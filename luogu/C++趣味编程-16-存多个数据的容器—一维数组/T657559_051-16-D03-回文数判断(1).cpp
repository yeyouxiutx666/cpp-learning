#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ; cin >> n;
    string s = to_string(n);
    for (int i = 0 ; i < s.length()/2 ; i++)
    {
        swap(s[i], s[s.length()-1-i]);
    }
    if (s == to_string(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
