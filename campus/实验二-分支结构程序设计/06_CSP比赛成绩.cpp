#include <iostream>

using namespace std;

int main ()

{

    int grade ; cin >> grade ;

    if (grade >= 248) cout << "A" << endl;

    else if (grade >= 100 && grade < 248) cout << "B" << endl;

    else if (grade >= 70 && grade < 100) cout << "C" << endl;

    else cout << "D" << endl;

    

    return 0;

}
