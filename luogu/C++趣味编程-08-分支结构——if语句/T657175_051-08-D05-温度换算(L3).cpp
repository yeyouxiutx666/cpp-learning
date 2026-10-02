#include <bits/stdc++.h>
using namespace std;


int main()
{
   string t_type ;
   cin >> t_type;
   double F , C ;
   cout << fixed << setprecision(2) ;
   if (t_type == "F")
   {
        cin >> F ;
        cout << (F-32)/1.8 << endl;
   }
   else
   {
        cin >> C ;
        cout << (9.0/5)*C+32 << endl;
   }

    return 0;
}
