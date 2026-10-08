#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int f_h , m_h ;
    cin >> f_h >> m_h ;
    cout << fixed << setprecision(1) << (f_h + m_h)*1.08 /2 << " " << (f_h + 0.923*m_h)/2 << endl;
    
    return 0;
}
