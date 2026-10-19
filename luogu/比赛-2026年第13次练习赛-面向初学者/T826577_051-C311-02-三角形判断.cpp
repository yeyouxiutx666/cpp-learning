#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    // cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    if (arr[0] + arr[1] > arr[2])
    {
        if (arr[0] == arr[1] && arr[1] == arr[2])
        {
            cout << "dengbian" << endl;
        }
        else if (arr[0] == arr[1] || arr[1] == arr[2])
        {
            cout << "dengyao" << endl;
        }
        else if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
        {
            cout << "zhijiao" << endl;
        }
        else
        {
            cout << "yiban" << endl;
        }
    }
    else
    {
        cout << "no" << endl;
    }
    
    return 0;
}
