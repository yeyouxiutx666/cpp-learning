#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double price;
    if (n >= 500)
    {
        price = n * 0.6;
    }
    else if (n >= 400)
    {
        price = n * 0.7;
    }
    else if (n >= 300)
    {
        price = n * 0.8;
    }
    else if (n >= 200)
    {
        price = n * 0.9;
    }
    else
    {
        price = n;
    }
    cout << fixed << setprecision(1) << price << endl;
    return 0;
}
