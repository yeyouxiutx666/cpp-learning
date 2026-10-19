#include <bits/stdc++.h>
using namespace std;

vector<string> expand(const vector<string> &a)
{
    int h = a.size(), w = a[0].size();
    vector<string> b(2 * h, string(2 * w, '0'));
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
        {
            char c = a[i][j];
            char d = (c == '1') ? '0' : '1';

            b[2 * i][2 * j]         = c;   // 左上
            b[2 * i][2 * j + 1]     = d;   // 右上
            b[2 * i + 1][2 * j]     = d;   // 左下
            b[2 * i + 1][2 * j + 1] = c;   // 右下
        }
    return b;
}

int main()
{
    int H, W, t;
    cin >> H >> W >> t;

    vector<string> a(H);
    for (int i = 0; i < H; i++) cin >> a[i]; 

    for (int k = 0; k < t; k++) a = expand(a); 

    for (int i = 0; i < (int)a.size(); i++) cout << a[i] << '\n';
    return 0;
}
