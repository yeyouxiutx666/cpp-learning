#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 100 ; i <= 999 ; i++)
     {
        int b = i / 100 ;
        int s = (i / 10) % 10 ;
        int g = i % 10 ;
        if (i == b*b*b + s*s*s + g*g*g)
         {
            cout << i << endl;
         }
     }

    return 0;
    
}
