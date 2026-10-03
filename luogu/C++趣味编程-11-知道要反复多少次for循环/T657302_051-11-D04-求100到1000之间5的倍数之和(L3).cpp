#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 0 ;
    for (int i = 100 ; i < 1001 ; i++)
     {
        if (i % 5 ==0) num += i ;
     }
    cout << num ; 
    return 0;
}
