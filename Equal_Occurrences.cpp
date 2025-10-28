#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        map<long long, int> freq;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }
        int ans = 0;

        for (int f = 1; f <= n; f++)
        {
            int cnt = 0;
            for (auto &p : freq)
            {
                if (p.second >= f)
                    cnt++;
            }
            ans = max(ans, cnt * f);
        }
        cout << ans << "\n";
    }

    return 0;
}