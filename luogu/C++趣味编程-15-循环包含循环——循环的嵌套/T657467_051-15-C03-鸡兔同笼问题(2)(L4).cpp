#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0; cin >> n;
    bool fond = false ;
    
    if (n % 2 != 0)
    {
        cout << "no answer" << endl;
    }
    else
    {
        for (int i = 0 ; i <= n / 2 ; i++)
         {
            if ((n-2*i)%4==0)
             {
                cout << i << " " << (n-2*i)/4 << endl;
                fond = true ;
             }
         }
        if (!fond)
    {
        cout << "no answer" << endl;
    }
    }

    return 0;
    
}
