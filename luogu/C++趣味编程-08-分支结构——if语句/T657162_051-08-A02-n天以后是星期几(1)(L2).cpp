#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n ;
    cin >> n ;
    int arr [7] = {0 , 1 , 2 , 3 , 4 , 5 , 6} ;
    int num = n % 7 ;
    if ( arr[num] == 6)
    {
        cout << 0 << endl ;
    }
    else
    {
        cout << arr[num]+1 << endl ;
    }

    return 0;
}
