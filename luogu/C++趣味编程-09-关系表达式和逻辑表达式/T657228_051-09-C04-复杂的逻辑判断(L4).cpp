#include <bits/stdc++.h>
using namespace std;


int main()
{
   int yuwen , shuxue ;
   cin >> yuwen >> shuxue;
   if (yuwen > 95 && shuxue > 95 || yuwen == 100 || shuxue == 100)
   {
       cout << "yes" << endl;
   }
   else
   {
       cout << "no" << endl;
   }

   return 0;
}
