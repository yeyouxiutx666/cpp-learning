#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    string s = to_string(n) ;
    int res = 0 ;
    for (int i = 0 ; i < 5 ; i++)
    {
        res += (s[i] - '0') ;
    }
    cout << res << endl;
    
    return 0;
}
