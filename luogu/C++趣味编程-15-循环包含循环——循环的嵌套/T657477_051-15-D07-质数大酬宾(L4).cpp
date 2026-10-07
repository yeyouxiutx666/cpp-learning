#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y ; cin >> y ;
    
    bool id = true ;
    for (int i = 2 ; i <= y ; i++)
     {
        id = true ;
        
        for (int j = 2 ; j < i ; j++)
         {
            if (i % j == 0)
             {
                id = false ;
             }
         }
        if (id)
        {
            cout << i << " " ;
        }
        

     }
    
    return 0;
    
}
