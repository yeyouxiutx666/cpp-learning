#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char z;
    cin >> x >> y >> z;

    switch(z)
    {
        case 'N': x--; break;
        case 'S': x++; break;
        case 'E': y++; break;
        case 'W': y--; break;
    }
    cout << x << " " << y << endl;

    return 0;

}




