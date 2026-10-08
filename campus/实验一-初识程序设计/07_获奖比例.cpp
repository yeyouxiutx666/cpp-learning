#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n1,n2,n3 ;
    cin >> n1 >> n2 >> n3 ;
    cout << fixed << setprecision (2) << (double)n2 / n1 *100 << "% " << (double)n3 / n1 *100 << "%" << endl; 
    
    return 0;
}
