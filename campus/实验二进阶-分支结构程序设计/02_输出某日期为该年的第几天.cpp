#include <bits/stdc++.h>
using namespace std;

bool isryear(int y)
{
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return true;
    else
        return false;
}

int main()
{
    int y , m , d ;
    cout << "Input year, month, day:" ;
    cin >> y >> m >> d ;
    int months[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isryear(y)) months[2] = 29;
    int days = 0;
    for (int i = 1; i < m; i++) days += months[i];
    days += d;
    cout << "Days of year: " << days << endl;

    return 0;
}
