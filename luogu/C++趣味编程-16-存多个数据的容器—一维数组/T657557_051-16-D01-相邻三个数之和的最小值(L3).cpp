#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[20]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 用第一组相邻三个数的和初始化最小值
    int min_sum = arr[0] + arr[1] + arr[2]; //不可以初始化为0，否则下面比大小永远都比这里大

    // 遍历所有起点，共n组相邻三个数
    for (int i = 1; i < n; i++) {
        // 下标对n取模，实现环形首尾回绕
        int sum = arr[i] + arr[(i + 1) % n] + arr[(i + 2) % n];
        if (sum < min_sum) {
            min_sum = sum;
        }
    }

    cout << min_sum << endl;
    return 0;
}
