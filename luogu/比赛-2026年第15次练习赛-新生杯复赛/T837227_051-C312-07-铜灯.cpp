#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    long long k;
    cin >> n >> s >> k;

    int carry = 0;                     
    for (int i = n - 1; i >= 0; i--)   
    {
        int add = k % 2;               
        k = k / 2;                   

        int sum = (s[i] - '0') + add + carry;  

        s[i] = (sum % 2) + '0';  
        carry = sum / 2;              
    }
    cout << s << endl;
    
    return 0;
}
