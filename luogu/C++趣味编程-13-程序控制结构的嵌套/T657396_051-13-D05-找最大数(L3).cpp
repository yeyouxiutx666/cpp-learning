#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    int num_1 ; cin >> num_1 ;
    int max = num_1 ;
    int num ;
    for (int i = 1 ; i < n ; i++)
     {
        cin >> num ;
        if (num > max) max = num ;
     }
    cout << max << endl;
    
    return 0;
    
}
