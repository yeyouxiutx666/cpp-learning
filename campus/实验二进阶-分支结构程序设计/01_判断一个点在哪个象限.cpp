#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, y;
    char ch1, ch2, ch3;

    cout << "Please input coordinates of a point (x,y):" << endl;
    cin >> ch1 >> x >> ch2 >> y >> ch3;

    if (x > 0 && y > 0)        cout << "This point is in QI." << endl;
    else if (x < 0 && y > 0)   cout << "This point is in QII." << endl;
    else if (x < 0 && y < 0)   cout << "This point is in QIII." << endl;
    else if (x > 0 && y < 0)   cout << "This point is in QIV." << endl;
    else if (x == 0 && y == 0) cout << "This point is the origin." << endl;
    else if (x == 0)           cout << "This point is on the y-axis." << endl;
    else                       cout << "This point is on the x-axis." << endl;

    return 0;
}
