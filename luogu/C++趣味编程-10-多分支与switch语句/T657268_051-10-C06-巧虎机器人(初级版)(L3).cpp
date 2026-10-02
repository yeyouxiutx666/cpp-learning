#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char c;
    cin >> x >> y >> c;
    switch(c)
    {
        case 'N': x--; break;  // 向北：行号减1
        case 'S': x++; break;  // 向南：行号加1
        case 'W': y--; break;  // 向西：列号减1
        case 'E': y++; break;  // 向东：列号加1
    }
    cout << x << " " << y << endl;
    return 0;
}
