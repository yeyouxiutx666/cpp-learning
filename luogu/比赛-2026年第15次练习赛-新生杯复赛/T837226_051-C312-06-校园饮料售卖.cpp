#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n ; cin >> n;
    long long n100 = n / 100; n %= 100;
    long long n50  = n / 50;  n %= 50;
    long long n20  = n / 20;  n %= 20;
    long long n10  = n / 10;  n %= 10;
    long long n5   = n / 5;   n %= 5;
    long long n1   = n;

    cout << n100 + n50 + n20 + n10 + n5 + n1 << endl;

    return 0;
}
