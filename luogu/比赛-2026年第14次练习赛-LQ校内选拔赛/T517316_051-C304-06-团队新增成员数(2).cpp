#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n ; int arr[20] ;
    cin >> n ;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int cnt = 0 ; 
    int t ; cin >> t ;
    for (int i = 0 ; i < n; i++) 
    {
        if (arr[i] > t) 
        {
            cnt++;
        }
    }
    cout << cnt << endl;


    return 0;
}
