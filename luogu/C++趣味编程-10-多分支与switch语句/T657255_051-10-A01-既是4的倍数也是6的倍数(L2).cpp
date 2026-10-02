#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n ;
    cin >> n;
    auto res_1 = n % 4 ;
    auto res_2 = n % 6 ; 
    switch (res_1 + res_2)
     {
        case 0 : cout << "yes" << endl; break;
        default : cout << "no" << endl; break;
     }

    return 0;
}
