#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y1 , y2 ; cin >> y1 >> y2 ;
    int cnt = 0 ;
    for (int i = y1 ; i <= y2 ; i++)
     {
        if (y1 % 4 == 0 && y1 % 100 != 0 || y1 % 400 == 0)
         {
            cnt++ ;
         }
        else ;
        y1++;
     }
    cout << cnt << endl;

    return 0;
    
}
