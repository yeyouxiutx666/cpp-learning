#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double s,t,r;
    cin >> s;
    if(s <= 8500)
        r = 0.0;
    else if(s <= 13500)
        r = 0.05;
    else if(s <= 28500)
        r = 0.1;
    else if(s <= 58500)
        r = 0.15;
    else
        r = 0.2;

    t = r * (s - 8500);
    if(t == -0.0) t = 0.0; // 解决 -0.0 负零bug
    cout << fixed << setprecision(1) << t << '\n';
    return 0;
}
