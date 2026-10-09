#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;
    while (n > 0) {
        int digit = n % 10;    // 提取当前个位数字
        res = res * 10 + digit;// 将数字拼接到结果末尾
        n = n / 10;            // 去掉已处理的个位
    }
    cout << res << endl;
    return 0;
}

/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end()); // 反转整个字符串
    
    // 跳过开头所有的前导零
    int start = 0;
    while (start < s.size() && s[start] == '0') {
        start++;
    }
    
    cout << s.substr(start) << endl; // 输出第一个非零之后的内容
    return 0;
}

*/
