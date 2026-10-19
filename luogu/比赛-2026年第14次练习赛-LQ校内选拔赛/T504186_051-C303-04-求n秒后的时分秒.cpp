#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int h , m , s , n ;
    cin >> h >> m >> s >> n ;
    int s_new = s + n % 60 ;
    int m_new = m + (n / 60) % 60 + s_new / 60 ;
    int h_new = h + (n / 3600) % 24 + m_new / 60 ;
    cout << h_new % 24 << " " << m_new % 60 << " " << s_new % 60 << endl;
    

    return 0;
}
