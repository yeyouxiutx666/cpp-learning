#include <bits/stdc++.h>
using namespace std;
int main( )
{
    double a, b;
	cin >> a >> b;
	cout << (int)(a / b) << " " << fixed << setprecision(2) << a - (int)(a / b) * b << endl;

    return 0;
}
