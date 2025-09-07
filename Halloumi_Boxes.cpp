#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        vector<long long> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<long long> v_copy = v;
        sort(v_copy.begin(), v_copy.end());

        if (v_copy == v || k > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}