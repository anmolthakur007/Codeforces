#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        bool bad = false;
        for (int i = 0; i + 2 < n; ++i)
        {
            if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
            {
                bad = true;
                break;
            }
        }
        cout << (bad ? "NO\n" : "YES\n");
    }
    return 0;
}
