#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double p;
    int a;
    cin >> p >> a;
    double total;
    switch(a)
    {
        case 1:
            total = p * a;
            break;
        case 2:
            total = p * a * 0.9;
            break;
        default: // 3包及以上统一8折
            total = p * a * 0.8;
            break;
    }
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}
