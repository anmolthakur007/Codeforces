#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long m;
        cin >> n >> m;

        vector<long long> a(n + 1);
        vector<int> b(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i] >> b[i];

        a.push_back(m);
        b.push_back(-1);

        long long ans = 0;
        long long prev_time = 0;
        int prev_side = 0;

        for (int i = 1; i < (int)a.size(); i++)
        {
            long long len = a[i] - prev_time;
            if (b[i] == -1)
            {
                ans += len;
            }
            else
            {
                long long diff = abs(b[i] - prev_side);
                ans += len - ((len - diff) % 2);
            }
            prev_time = a[i];
            if (b[i] != -1)
                prev_side = b[i];
        }

        cout << ans << "\n";
    }
    return 0;
}
