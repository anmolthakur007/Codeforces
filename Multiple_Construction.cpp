#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> ans(2 * n + 1, 0);

        int pos = 1;
        for (int x = 1; x <= n; x++)
        {
            while (ans[pos] != 0)
                pos++; // find first free position
            ans[pos] = x;
            ans[pos + x] = x; // place second occurrence
        }

        for (int i = 1; i <= 2 * n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
