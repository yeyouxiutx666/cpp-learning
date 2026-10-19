#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age, status;

    cout << "Please input age:" << endl;
    cin >> age;

    if (age > 59)
    {
        cout << "Please input status:" << endl;
        cin >> status;

        if (status == 1) cout << "Working senior" << endl;
        else             cout << "Retired senior" << endl;
    }
    else
    {
        cout << endl;

        if (age > 20)      cout << "Adult" << endl;
        else if (age > 12) cout << "Teen" << endl;
        else               cout << "Child" << endl;
    }

    return 0;
}
