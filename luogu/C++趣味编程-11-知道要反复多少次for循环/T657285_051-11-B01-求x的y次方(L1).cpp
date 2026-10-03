#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x , y ;
    cin >> x >> y ;
    int num = 1 ;
    for (int i = 0 ; i < y ; i++)
     {
        num = num * x ;
        
     }
    cout << num << endl;

    return 0;
}
