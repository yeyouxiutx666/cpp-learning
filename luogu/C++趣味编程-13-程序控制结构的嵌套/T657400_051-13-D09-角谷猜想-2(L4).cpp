#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int cnt = 0 ;
    if (n == 1) cout << "End" << endl;
    else 
    {
        for (int i = 0 ; n != 1 ; i++)
        {
            if (n % 2 == 0)
            {
                cout << n << "/2=" << n / 2 << endl;
                n = n / 2 ;
            }    
            else 
            {
                cout << n << "*3+1=" << n*3+1 << endl;
                n = n * 3 + 1 ;
            }    
            //cnt++ ;
            // cout << cnt << " " ;
        }
        cout << "End" << endl;
    }    
    // cout << cnt << endl;

    return 0;
    
}
