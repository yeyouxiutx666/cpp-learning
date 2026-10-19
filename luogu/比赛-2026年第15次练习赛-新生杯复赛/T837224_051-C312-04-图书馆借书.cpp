#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100010;
bool isat[MAXN];
void bfunc(int x) { isat[x] = false; } // 借出
void rfunc(int x) { isat[x] = true;  } // 归还
bool qfunc(int x) { return isat[x];  } // 是否在馆

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) isat[i] = true;
    char op; int x;
    for (int i = 0; i < m; i++)
    {
        cin >> op >> x;
        if (op == 'B')      bfunc(x);
        else if (op == 'R') rfunc(x);
        else if (op == 'Q') cout << (qfunc(x) ? "Yes" : "No") << '\n';
    }

    
    return 0;
}
