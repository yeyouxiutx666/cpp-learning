#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int arr[n] ;
    for (int i = 0 ; i < n ; i++)
     {
        cin >> arr[i] ;
     }
    double num = 0 ;
    for (int i = 0 ; i < n ; i++)
     {
        num = num + arr[i] ;
     } 
    cout << fixed << setprecision (2) << num/n << endl;
    
    return 0;
}
