#include <bits/stdc++.h>
using namespace std;


int main()
{
    int x , n ;
    cin >> x >> n ;
    stringstream text_num ;
    for (int i = 0 ; i < n ; i++)
     {
        text_num << x ;
     }
    int num ;
    text_num >> num ;
    cout << num << endl;
    return 0;
}
