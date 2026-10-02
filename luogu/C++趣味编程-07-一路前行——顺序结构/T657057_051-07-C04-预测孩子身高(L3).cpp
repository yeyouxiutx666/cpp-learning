#include <bits/stdc++.h>
using namespace std;

int main()
{
    int f_l , m_l ;
    cin >> f_l >> m_l ;
    cout << fixed << setprecision(1)<< (f_l + m_l) * 1.08/2 << " " << (f_l + 0.923 * m_l) /2 << endl;
    return 0;
}
