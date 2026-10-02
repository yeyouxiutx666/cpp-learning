#include <bits/stdc++.h>
using namespace std;


int main()
{
    int day ;
    cin >> day ;
    int arr[] = {6 , 7} ;
    auto it = find (arr , arr+2 , day) ;
    if (it != arr+2)
    {
        cout << "PLAY" << endl ;
    }
    else
    {
        cout << "STUDY" << endl ;
    }

    return 0;
}
