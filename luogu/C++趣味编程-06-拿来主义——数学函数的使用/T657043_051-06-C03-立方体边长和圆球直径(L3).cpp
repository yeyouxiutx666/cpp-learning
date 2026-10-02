#include <bits/stdc++.h>
using namespace std;
int main( )
{
    int n;
    cin >> n;
	
	double z , y ;

	z = cbrt(n) ;
	// 圆的体积计算公式为 4.0/3.0 * 3.14159265358979323846 * z * z * z ;
	y = cbrt(((n * 3 ))/4.0/3.14159265358979323846) *2 ;

	cout << fixed << setprecision (3) << z << " " << y << endl;
    return 0;
}
