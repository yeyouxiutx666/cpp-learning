#include <bits/stdc++.h>
using namespace std;


int main()
{
   int arr[4];
   int sum[3];
   for (int i = 0 ; i < 4 ; i++)
    {
        cin >> arr[i];
    }
   for (int i = 0 ; i < 3 ; i++)
    {
        sum[i] = arr[0] % arr[i+1];
    } 
   int m = 0;
   for (int j = 0 ; j < 3 ; j++)
    {
        m = m + sum[j];
    }
   if (m == 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

   return 0;
}
