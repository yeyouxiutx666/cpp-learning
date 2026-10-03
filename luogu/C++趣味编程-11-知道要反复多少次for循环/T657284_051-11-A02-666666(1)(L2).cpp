#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n ;
    cin >> n ;
    string s = to_string(n) ;
    string m ;
    for (int i = 0 ; i < 6 ; i++)
     {
        m = m + s ;
     }
    cout << stoi(m) << endl; 
    return 0;
}
