#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n ;   
    cin >> n ;
    int arr[n] ;
    // 在这里需要注意，数组长度不支持变量，所以先cin再定义arr才可以正常运行
    for (int i = 0 ; i < n ; i++)
     {
        cin >> arr[i] ;
     }
    int num = 0 ;
    for (int j = 0 ; j < n ; j++)
     {
        num += arr[j] ;
     }
    cout << num << endl; 

    return 0;
}
