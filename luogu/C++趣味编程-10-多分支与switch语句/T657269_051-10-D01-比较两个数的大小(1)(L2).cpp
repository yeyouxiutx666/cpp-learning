#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "bigger" << endl;
    }
    else if (a < b)
    {
        cout << "smaller" << endl;
    }
    else
    {
        cout << "same" << endl;
    }
    return 0;
}
