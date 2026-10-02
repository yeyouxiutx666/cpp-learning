#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // 保证 c 是三条边中的最大值
    if (a > c)
    {
        int t = a;
        a = c;
        c = t;
    }
    if (b > c)
    {
        int t = b;
        b = c;
        c = t;
    }

    // 先判断能否构成三角形
    if (a + b <= c)
    {
        cout << "no" << endl;
    }
    else
    {
        int sum_sq = a * a + b * b;
        int max_sq = c * c;
        if (sum_sq == max_sq)
            cout << "right" << endl;
        else if (sum_sq > max_sq)
            cout << "acute" << endl;
        else
            cout << "obtuse" << endl;
    }
    return 0;
}
