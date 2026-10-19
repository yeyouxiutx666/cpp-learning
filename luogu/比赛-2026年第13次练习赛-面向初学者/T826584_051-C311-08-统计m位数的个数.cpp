#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int nums[1000];
    // 读取n个正整数
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int m;
    cin >> m;
    
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        // 转字符串后判断长度是否等于m
        if (to_string(nums[i]).size() == m) {
            cnt++;
        }
    }
    
    cout << cnt << endl;
    return 0;
}
