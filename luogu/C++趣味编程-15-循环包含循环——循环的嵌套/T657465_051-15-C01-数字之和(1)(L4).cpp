#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num ; cin >> num;
    int res = 0 ;
    while (num / 10 != 0)
     {
        string str = to_string(num);
        for (int i = 0; i < str.size(); i++)
        {
            res += (str[i] - '0');
        }
        num = res;
        res = 0;
     }
    cout << num << endl;

    return 0;
    
}
