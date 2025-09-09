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
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<long long>());

        long long ans = 0;
        long long k = min<long long>(n, m);

        for (long long i = 0; i < k; i++)
        {
            ans += a[i] * (m - i);
        }

        cout << ans << "\n";
    }
    return 0;
}
