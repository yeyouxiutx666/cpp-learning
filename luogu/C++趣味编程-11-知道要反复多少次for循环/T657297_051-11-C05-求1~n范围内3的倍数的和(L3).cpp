#include <bits/stdc++.h>
using namespace std;




int main()
{
    int n ;
    cin >> n ;
    int num = 0 ;
    
    for (int i = 1 ; i < n + 1 ; i++)
     {
        if (i % 3 == 0)
         {
            num = num + i ;
         }
        
     }
    cout << num << endl;
    return 0;
}
