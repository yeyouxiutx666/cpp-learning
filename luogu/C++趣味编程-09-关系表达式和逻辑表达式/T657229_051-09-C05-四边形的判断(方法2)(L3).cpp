#include <bits/stdc++.h>
using namespace std;

int main()
{
   int arr[4] ;
   for (int i = 0 ; i < 4 ; i++)
   {
      cin >> arr[i] ;
   }
   for (int i = 0 ; i < 3 ; i++)
   {
      for (int j = 0 ; j < 3 - i ; j++)
      {
         if (arr[j] > arr[j + 1])
         {
            swap(arr[j], arr[j + 1]) ;
         }
      }
   }
   if (arr[3] > arr[0] + arr[1] + arr[2])
   {
      cout << "no" << endl;
   }
   else
   {
      cout << "yes" << endl;
   }
    
   return 0;
}
