#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char z;
    cin >> x >> y >> z;
    switch(z)
    {
        case '+': cout << x + y; break;
        case '-': cout << x - y; break;
        case '*': cout << x * y; break;
        case '/': cout << x / y; break; 
        case '%': cout << x % y; break;
    }
    
    return 0;

}


