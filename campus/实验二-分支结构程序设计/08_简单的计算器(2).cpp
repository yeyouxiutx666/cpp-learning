#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char z;
    cin >> x >> y >> z;
    switch(z)
    {
        case '+':
            cout << x + y << endl;
            break;
        case '-':
            cout << x - y << endl;
            break;
        case '*':
            cout << x * y << endl;
            break;
        case '/':
            if(y == 0)
            {
                cout << "Divided by zero!" << endl;
            }
            else
            {
                cout << x / y << endl;
            }
            break;
        case '%':
            if(y == 0)
            {
                cout << "Divided by zero!" << endl;
            }
            else
            {
                cout << x % y << endl;
            }
            break;
        default:       
            cout << "Invalid operator!" << endl;
    }

    return 0;

}


