#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int tail = n % 10; // 取学号个位（尾号）
    switch(tail)
    {
        case 1:
        case 4:
        case 7:
            cout << 1 << endl;
            break;
        case 2:
        case 5:
        case 8:
            cout << 2 << endl;
            break;
        default:
            cout << 3 << endl;
            break;
    }
    return 0;
}
