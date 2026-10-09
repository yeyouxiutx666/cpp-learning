#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num = 0 ;
    for (int i = 0; i < n; i++)
    {
        num += arr[i];
    }
    cout << num << endl;

    return 0;
}
