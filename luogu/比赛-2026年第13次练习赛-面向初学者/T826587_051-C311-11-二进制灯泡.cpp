#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    
    for (int i = 1; i <= n; ++i) {
        int num = i;
        int ones = 0;
        // 统计二进制中1的个数
        while (num > 0) {
            ones += num % 2;
            num = num / 2;
        }
        // 1的个数为奇数则亮灯
        if (ones % 2 == 1) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
