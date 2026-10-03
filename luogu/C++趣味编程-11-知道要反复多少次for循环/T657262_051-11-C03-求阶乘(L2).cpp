#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n ;
    cin >> n ;
    long long num = 1 ;
    for (int i = 1 ; i < n+1 ; i++)
     {
        num = num * i ;
     }
    cout << num ;
    return 0;
}
