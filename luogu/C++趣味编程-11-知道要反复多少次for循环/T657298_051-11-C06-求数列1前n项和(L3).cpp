#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    double arr[n] ;
    arr[0] = 81.0 ;
    for (int i = 1 ; i < n ; i++)
     {
        arr[i] = abs(sqrt(arr[i-1])) ;
     }
    double num = 0 ; 
    for (int j = 0 ; j < n ; j++)
     {
        num = num + arr[j] ;
     } 
    cout << fixed << setprecision (6) << num << endl; 

    return 0;
}
