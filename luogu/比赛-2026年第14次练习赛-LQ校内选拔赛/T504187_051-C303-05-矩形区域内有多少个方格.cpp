#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int r1 , c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    cout << (fabs(r1 - r2) + 1) * (fabs(c1 - c2) + 1) << endl;

    return 0;
}
