#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num ; cin >> num ;
    string mun = to_string(num) ;
    int n = 1 ;
    for (int i = mun.length() - 1 ; i >=0 ; i--)
     {
        int number = mun[i] - '0' ;
        // if (number == 0) continue;
        // else cout << number ; 
        //这样写会导致所有0都丢失,修改为当遇到第一个非零的时候再开始输出
        if (number != 0)
         {           
            break ; //遇到第一个非零就退出，由n记录是哪个位置
         }
        n++ ;
     }

    for (int i = mun.length() - n ; i >=0 ; i--)
     {
        int number = mun[i] - '0' ;
        cout << number ;
     } 

    return 0;
    
}
