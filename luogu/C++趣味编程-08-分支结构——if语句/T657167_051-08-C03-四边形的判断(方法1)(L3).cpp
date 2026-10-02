#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[4] ;
    for (int i = 0 ; i < 4 ; i++)
    {
        cin >> arr[i] ;
    }
    for (int i = 0 ; i < 4 ; i++)
    {
        for (int j = i + 1 ; j < 4 ; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]) ;
            }
        }
    }
    int max_num = arr[3] ;
    if (max_num < arr[0] + arr[1] + arr[2])
    {
        cout << "yes" << endl ;
    }
    else
    {
        cout << "no" << endl ;
    }

    return 0;
}
