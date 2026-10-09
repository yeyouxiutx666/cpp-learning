#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n1 = 1 , n2 = 1 ;
    int n3 = 0 ;
    int arr[40] ;
    for (int i = 0 ; i < 40 ; i++)
    {
        arr[i] = n1 ;
        n3 = n1 + n2 ;
        n1 = n2 ;
        n2 = n3 ;
    }
    /*
    for (int i = 0 ; i < 40 ; i++)
    {
        cout << arr[i] << " " ;
    }
    */
    for (int i = 0 ; i < 8 ; i++)
    {
        for (int j = 0 ; j < 5 ; j++)
        {
            // cout << setfill('0') ;
            cout << setw(12) << right ;
            cout << arr[i * 5 + j] ;
        }
        cout << endl ;
    }


    return 0;
}
