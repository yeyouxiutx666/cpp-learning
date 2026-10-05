#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int master ; cin >> master ;
    int people = 0 ;
    for (int i = 1 ; i < n ; i++)
     {
        cin >> people ;
        if ( people > master ) master = people ;
     }
    cout << master << endl;

    return 0;
    
}
