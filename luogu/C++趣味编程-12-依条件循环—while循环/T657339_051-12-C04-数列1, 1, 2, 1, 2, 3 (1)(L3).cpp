#include <bits/stdc++.h>
using namespace std;

int main()
{
    //先将n按-1-2-3的顺序减，当哪一次不够减的时候再看还剩多少就是多少的值
    int n ; cin >> n ;
    int num = 0 ;
    while (n > 0)
     {
        num++ ;
        n -= num ;
     }
     cout << n+num << endl;
     return 0;
    
}
