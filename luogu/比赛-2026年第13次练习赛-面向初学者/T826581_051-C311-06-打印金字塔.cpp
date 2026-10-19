#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int k = 1; k <= n; k++) {
        // 输出当前层上半行（尖部 /\）
        for (int i = 0; i < 2 * (n - k) + 1; i++) {
            cout << ' ';
        }
        for (int i = 0; i < k; i++) {
            if (i != 0) cout << "  ";
            cout << "/\\";
        }
        cout << endl;
        
        // 输出当前层下半行（底部 /__\）
        for (int i = 0; i < 2 * (n - k); i++) {
            cout << ' ';
        }
        for (int i = 0; i < k; i++) {
            cout << "/__\\";
        }
        cout << endl;
    }
    return 0;
}
