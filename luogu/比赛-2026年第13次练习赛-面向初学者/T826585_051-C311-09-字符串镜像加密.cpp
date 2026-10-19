#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    // 读取整行输入（包含空格、标点）
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++)
    {
        // 处理小写字母
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = 'a' + 'z' - s[i];
        }
        // 处理大写字母
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = 'A' + 'Z' - s[i];
        }
        // 非字母字符不做处理
    }
    
    cout << s << endl;
    return 0;
}
