#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a , b , c ; int x , y , z ;
    cin >> a >> b >> c ;
    cin >> x >> y >> z ;
    int n1 = a / x ; int n2 = b / y ; int n3 = c / z ;
    int ans = min(n1 , min(n2 , n3)) ; 
    cout << ans << endl ;

    return 0;
}
