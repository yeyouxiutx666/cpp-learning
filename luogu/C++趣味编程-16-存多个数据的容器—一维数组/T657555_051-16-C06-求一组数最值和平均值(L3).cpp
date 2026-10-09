#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int max = 0 ; int min = 0 ;
    int n ; cin >> n ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }
    max = arr[0] ; min = arr[0] ;
    for(int i = 1 ; i < n ; i++)
    {
        if(arr[i] > max) max = arr[i] ;
        if(arr[i] < min) min = arr[i] ;
    }
    int num = 0 ;
    for (int i = 0 ; i < n ; i++)
    {
        num += arr[i] ;
    }
    cout << fixed << setprecision(2) << max << " " << min << " " << (double)num / n << endl;

    return 0;
}
