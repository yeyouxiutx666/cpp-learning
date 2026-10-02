#include <bits/stdc++.h>
using namespace std;


int main()
{
    //12小时制
    int n ;
    cin >> n ;
    if (n + 3 > 12)
    {   
        if ((n + 3)%12 == 0)
        {
            cout << 12 << endl;
        }
        else
        cout << (n + 3)%12 << endl;
    }
    else
    {
        cout << n + 3 << endl;
    }

    return 0;
}
