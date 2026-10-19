#include <bits/stdc++.h>
using namespace std;

int func(int num)
{
    string str = to_string(num);
    int result = 0;
    for (int i = 0 ; i < str.length() ; i++)
    {
        result += (str[i] - '0');
    }
    return result;
}

int main() 
{
    int n , m ;
    cin >> n >> m ;
    bool found = false ;
    for (int i = n ; i <= m ; i++)
    {
        if (i % 7 == 0 && func(i) > 10)
        {
            cout << i << endl;
            found = true;
            break ;
        }
        
    }
    if (!found)
    {
        cout << "none" << endl;
    }

    return 0;
}
