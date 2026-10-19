#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    int r1, r2;
    cin >> s1 >> r1 >> s2 >> r2;

    long long num1 = 0;
    // 第一个数：r1进制转十进制
    for (int i = 0; i < s1.length(); i++) {
        int digit = s1[i] - '0';  // 字符转对应整数
        num1 = num1 * r1 + digit; // 核心进制转换计算
    }

    long long num2 = 0;
    // 第二个数：r2进制转十进制
    for (int i = 0; i < s2.length(); i++) {
        int digit = s2[i] - '0';
        num2 = num2 * r2 + digit;
    }

    // 比较大小
    if (num1 > num2) {
        cout << "first" << endl;
    } else if (num1 < num2) {
        cout << "second" << endl;
    } else {
        cout << "same" << endl;
    }

    return 0;
}
