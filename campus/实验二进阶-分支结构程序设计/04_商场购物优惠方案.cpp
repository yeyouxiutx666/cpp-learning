#include <bits/stdc++.h>
using namespace std;

int main()
{
    int money;
    cin >> money;

    // 方案一：按金额区间打折
    int s1;
    if      (money < 250)  s1 = money * 1  / 100;
    else if (money < 500)  s1 = money * 2  / 100;
    else if (money < 1000) s1 = money * 5  / 100;
    else if (money < 2000) s1 = money * 8  / 100;
    else if (money < 3000) s1 = money * 10 / 100;
    else                   s1 = money * 12 / 100;

    // 方案二：满多少返多少，取达到的最高档
    int s2;
    if      (money < 200)  s2 = 0;
    else if (money < 400)  s2 = 12;
    else if (money < 800)  s2 = 30;
    else if (money < 1600) s2 = 75;
    else if (money < 2400) s2 = 175;
    else if (money < 3000) s2 = 280;
    else                   s2 = 375;

    if (s1 > s2)      cout << s1 << " 1" << endl;
    else if (s2 > s1) cout << s2 << " 2" << endl;
    else              cout << s1 << " 0" << endl;

    return 0;
}
