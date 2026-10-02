#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int r, m;
    cin >> r >> m;
    double res;
    switch(r)
    {
        case 1: res = m * 0.98; break;
        case 2: res = m * 0.88; break;
        case 3: res = m * 0.78; break;
        case 4: res = m * 0.68; break;
    }
    cout << fixed << setprecision(1) << res << endl;
    return 0;
}
