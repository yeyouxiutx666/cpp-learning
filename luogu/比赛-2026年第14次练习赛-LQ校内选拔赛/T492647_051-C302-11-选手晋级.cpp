#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double arra[5] ; double arrb[5] ;
    for (int i = 0; i < 5; i++) 
    {
        cin >> arra[i] ;
    }
    for (int i = 0; i < 5; i++) 
    {
        cin >> arrb[i] ;
    }
    sort (arra, arra + 5) ;
    sort (arrb, arrb + 5) ;
    double gradea = 0.0 ; double gradeb = 0.0 ;
    for (int i = 1; i <= 3; i++) 
    {
        gradea += arra[i] ;
        gradeb += arrb[i] ;
    }
    if (gradea > gradeb) 
    {
        cout << "A" << endl ;
    } 
    else 
    {
        cout << "B" << endl ;
    }
    

    return 0;
}
