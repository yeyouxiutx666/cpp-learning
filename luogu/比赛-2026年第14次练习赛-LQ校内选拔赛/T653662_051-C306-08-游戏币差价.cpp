#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ; cin >> n;
    int num = 2 * n  ;
    cout <<  int(n - num * 4 / 10) << " " << int(num * 1 -n) << " " << int(num * 4/10 - num * 1) << endl;

    return 0;
}
