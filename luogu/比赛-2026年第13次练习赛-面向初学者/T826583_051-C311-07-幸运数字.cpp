#include <iostream>
using namespace std;

// 判断一个数是不是幸运数字（仅由2和7组成）
bool isLucky(int x) {
    while (x > 0) {
        int digit = x % 10; // 取出个位数字
        if (digit != 2 && digit != 7) {
            return false; // 只要有一位不是2或7，就不是幸运数
        }
        x = x / 10; // 去掉个位，继续检查高位
    }
    return true;
}

int main() 
{
    int n;
    cin >> n;
    
    int count = 0; // 记录已经找到的幸运数个数
    int num = 0;   // 当前正在检查的数字
    
    while (count < n) {
        num++; // 检查下一个数
        if (isLucky(num)) {
            count++; // 找到幸运数，计数+1
        }
    }
    
    cout << num << endl;
    return 0;
}
