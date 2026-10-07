#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x , y ; cin >> x >> y ;
    
    bool id = true ;
    for (int i = x ; i <= y ; i++)
     {
        id = true ;
        if (i < 2)
        {
            id = false;
        }
        for (int j = 2 ; j < i ; j++)
         {
            if (i % j == 0)
             {
                id = false ;
             }
         }
        if (id)
        {
            cout << i << endl;
        }
        

     }
    
    return 0;
    
}
