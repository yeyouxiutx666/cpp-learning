#include <bits/stdc++.h>
using namespace std;

// 判断是否为闰年
bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 获取指定年份、月份的总天数
int getMonthDays(int year, int month) {
    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (month == 2 && isLeap(year))
        return 29;
    return days[month];
}

int main() {
    int y, m, d, n;
    cin >> y >> m >> d >> n;
    
    // 逐天累加，模拟日期推进
    for (int i = 0; i < n; i++) {
        d++;
        int maxDay = getMonthDays(y, m);
        // 日期超过当月总天数，进入下一月
        if (d > maxDay) {
            d = 1;
            m++;
            // 月份超过12，进入下一年
            if (m > 12) {
                m = 1;
                y++;
            }
        }
    }
    
    cout << y << " " << m << " " << d << endl;
    return 0;
}
