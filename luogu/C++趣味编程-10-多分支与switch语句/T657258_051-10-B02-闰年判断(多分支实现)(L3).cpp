#include <iostream>
using namespace std;

int main()
{
    int y;
    cin >> y;
    if (y % 400 == 0)
    {
        cout << "yes" << endl;
    }
    else if (y % 100 == 0)
    {
        cout << "no" << endl;
    }
    else if (y % 4 == 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
