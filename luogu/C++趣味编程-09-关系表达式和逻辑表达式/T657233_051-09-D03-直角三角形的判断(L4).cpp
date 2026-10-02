#include <bits/stdc++.h>
using namespace std;


int main()
{
   int arr[3];
   for (int i = 0 ; i < 3 ; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0 ; i < 2 ; i++)
    {
        for (int j = 0 ; j < 2 - i ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    if (arr[0]*arr[0] + arr[1]*arr[1] == arr[2]*arr[2])
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

   return 0;
}
