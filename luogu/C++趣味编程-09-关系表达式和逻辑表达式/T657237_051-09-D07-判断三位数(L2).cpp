#include <bits/stdc++.h>
using namespace std;


int main()
{
    int num ;
    cin >> num;
    string number = to_string(num);
    if ( number.length() == 3 )
     {
        cout << "YES" << endl;
     }
    else
     {
        cout << "NO" << endl;
     }

    return 0;
}
