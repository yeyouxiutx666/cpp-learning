#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n ;
    cin >> n;
    int arr[2] = {6 , 7} ;
    auto exist_n = find(arr , arr + 2 , n) ;
    if(exist_n != arr + 2)
    {
        cout << "weekend" << endl ;
    }
    else
    {
        cout << "weekday" << endl ;
    }

    return 0;
}
