#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char op;
    cin >> x >> y >> op;
    switch(op)
    {
        case '+': cout << x + y << endl; break;
        case '-': cout << x - y << endl; break;
        case '*': cout << x * y << endl; break;
        case '/': cout << x / y << endl; break;
        case '%': cout << x % y << endl; break;
    }
    return 0;
}
