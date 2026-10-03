#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    
    double num = 0 ; 
    for (int i = 0 ; i < n ; i++)
     {
        num = num + (pow(-1 , i))/(double)(i+1) ;
     } 
    cout << fixed << setprecision (4) << num << endl; 

    return 0;
}
