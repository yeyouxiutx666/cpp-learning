#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int grade , num ;
    num = 0 ;
    for (int i = 0 ; i < 5 ; i++)
    {
        cin >> grade ;
        num += grade ;
    }
    cout << fixed << setprecision (1) << num / 5.0 << endl;
    
    return 0;
}
