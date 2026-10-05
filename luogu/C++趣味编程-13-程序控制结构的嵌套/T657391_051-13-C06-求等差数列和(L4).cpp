#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s , t , k ;
    cin >> s >> t >> k ;
    int num = 0 ;
    if (k > 0)
     {
        while (t > s)
         {
            num += s ;
            s = s + k ;
         } 
     }
    else 
     {
        while (s > t)
         {
            num += s ;
            s = s + k ;
         }
     } 
    cout << num << endl;

    return 0;
    
}
