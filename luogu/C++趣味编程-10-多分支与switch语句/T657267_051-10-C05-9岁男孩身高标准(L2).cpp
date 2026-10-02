#include <iostream>
using namespace std;

int main()
{
    double height;
    cin >> height;
    if (height >= 141.2)
    {
        cout << "A" << endl;
    }
    else if (height >= 135.4)
    {
        cout << "B" << endl;
    }
    else if (height >= 129.6)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "D" << endl;
    }
    return 0;
}
