#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    string vote ;
    int vote_a = 0, vote_b = 0, vote_c = 0, vote_d = 0, vote_f = 0;
    for (int i = 0 ; i < n ; i++)
     {
        cin >> vote ;
        if (vote == "A") vote_a++;
        else if (vote == "B") vote_b++;
        else if (vote == "C") vote_c++;
        else if (vote == "D") vote_d++;
        else vote_f++;
     }
    cout << "A " << vote_a << endl;
    cout << "B " << vote_b << endl;
    cout << "C " << vote_c << endl;
    cout << "D " << vote_d << endl;
    cout << "F " << vote_f << endl;
    
    return 0;
    
}
