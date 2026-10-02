#include <iostream>
using namespace std;

int main()
{
    int money;
    cin >> money;
    
    // 方案一：折扣优惠，计算节省金额（整数运算截断小数，保留整数部分）
    int save1;
    if (money < 250)
        save1 = money * 1 / 100;
    else if (money < 500)
        save1 = money * 2 / 100;
    else if (money < 1000)
        save1 = money * 5 / 100;
    else if (money < 2000)
        save1 = money * 8 / 100;
    else if (money < 3000)
        save1 = money * 10 / 100;
    else
        save1 = money * 12 / 100;
    
    // 方案二：满返优惠，计算节省金额
    int save2;
    if (money < 200)
        save2 = 0;
    else if (money < 400)
        save2 = 12;
    else if (money < 800)
        save2 = 30;
    else if (money < 1600)
        save2 = 75;
    else if (money < 2400)
        save2 = 175;
    else if (money < 3000)
        save2 = 280;
    else
        save2 = 375;
    
    // 比较两种方案，输出最优结果
    if (save1 > save2)
        cout << save1 << " 1" << endl;
    else if (save2 > save1)
        cout << save2 << " 2" << endl;
    else
        cout << save1 << " 0" << endl;
    
    return 0;
}
