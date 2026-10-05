#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n ;
    
    
    if (n == 1 || n == 2) cout << "1" << endl;
    else 
    {
        int arr[n+1];
        arr[0] = 0 ; arr[1] = 1 ; arr[2] = 1 ;
        for (int i = 1 ; i < n+1-2 ; i++)
        {
            arr[i+2] = arr[i] + arr[i+1] ;
            // cout << i << " " ;
            // cout << arr[i+2] << endl;
        }
        cout << arr[n] << endl;
    }    
    

    return 0;
    
}

/*
1.vector 数组版
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if (n == 1 || n == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        vector<int> arr(n + 1); // C++标准动态数组
        arr[1] = 1;
        arr[2] = 1;
        // 从第3项递推到第n项，逻辑更直观
        for (int i = 3; i <= n; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        cout << arr[n] << endl;
    }
    
    return 0;
}
2.滚动变量版（最优标准写法，空间 O (1)）
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if (n == 1 || n == 2)
    {
        cout << 1 << endl;
        return 0;
    }
    
    int prev2 = 1; // F(n-2)
    int prev1 = 1; // F(n-1)
    for (int i = 3; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1 << endl;
    
    return 0;
}

*/
