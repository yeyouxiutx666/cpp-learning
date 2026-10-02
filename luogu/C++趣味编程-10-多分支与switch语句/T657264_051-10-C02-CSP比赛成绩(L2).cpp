#include <iostream>
using namespace std;

int main()
{
    int score;
    cin >> score;
    if (score >= 248)
    {
        cout << "A" << endl;
    }
    else if (score >= 100)
    {
        cout << "B" << endl;
    }
    else if (score >= 70)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "D" << endl;
    }
    return 0;
}
