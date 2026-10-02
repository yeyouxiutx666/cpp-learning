#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n ;
    cin >> n;
    int arr[7] = {1,3,5,7,8,10,12} ;
    auto exist_n = find(arr , arr + 7 , n) ;
    if(exist_n != arr + 7)
    {
        cout << "big" << endl ;
    }
    else
    {
        cout << "small" << endl ;
    }

    return 0;
}
