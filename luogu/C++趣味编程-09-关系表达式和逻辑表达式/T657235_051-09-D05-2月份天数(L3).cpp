#include <bits/stdc++.h>
using namespace std;


int main()
{
   int y ;
   cin >> y;
   int res ;
   if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
   {
      res = 1;
   }
   else
   {
      res = 0;
   }
   if (res == 1)
   {
      cout << "29" << endl;
   }
   else
   {
      cout << "28" << endl;
   }

   return 0;
}
