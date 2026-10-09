#include <bits/stdc++.h>
using namespace std;

// 记录平年闰年的标记，用于在同月月份函数里解决二月份天数不同问题
bool month_flag = false;

// 判断闰年平年，如果闰年返回true，否则返回false
bool year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        month_flag = true;
        return true;
    }
    else
    {
        month_flag = false;
        return false;
    }
}

int month(int month)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else if (month == 2)
    {
        if (month_flag)
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        return -1; // Invalid month
    }
}

int main()
{
    int year_input; cin >> year_input;
    int month_input; cin >> month_input;
    if (year(year_input))
    {
        cout << month(month_input) << endl;
    }
    else
    {
        cout << month(month_input) << endl;
    }


    return 0;
}
