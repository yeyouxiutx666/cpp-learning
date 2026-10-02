#include <bits/stdc++.h>
using namespace std;
int main( )
{
    double a ;
    cin >> a ;
    if (a / (long long)a == 1)
    {
    	cout << (long long)a << " " << (long long)a ;
	}
    else
    {
    	cout << (long long)a << " " << ((long long)a)+1;
	}
    return 0;
}
