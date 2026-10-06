#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int cnt = 0 ;
    int grade = 0 ;
    int number = 0 ;
    for (int i = 0 ; i < n ; i++)
     {
        cin >> grade ;
        cnt++ ;
        if (grade == 100 && number == 0)
         {
            number = cnt ;
         }
        
     }
    cout << number << endl;

    return 0;
    
}
