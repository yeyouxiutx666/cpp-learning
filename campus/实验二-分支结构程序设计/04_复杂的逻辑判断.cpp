#include <iostream>
using namespace std;

int main ()
{
    int n , m ;
    cin >> n >> m ;
    if (n > 95 && m > 95) cout << "yes" << endl;
    else if (n==100 || m == 100) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
