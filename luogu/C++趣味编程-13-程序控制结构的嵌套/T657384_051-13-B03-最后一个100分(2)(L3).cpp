#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n ;
    int arr[n] ; 
    for (int i = 0 ; i < n ; i++)
     {
        cin >> arr[i] ;
     }
    int res = 0 ;
    for (int i = 0 ; i < n ; i++)
     {
        if (arr[i] == 100)
         {
            res = i+1 ;
         }
        else 
         { 
            
         } 
     } 
    if (res == 0) cout << "no" << endl;
    else cout << res << endl;
    
    return 0;
    
}
