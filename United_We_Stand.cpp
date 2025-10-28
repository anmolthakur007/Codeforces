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

        vector<long long> a(n);
        vector<long long> b;
        vector<long long> c;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // b.push_back(a[0]);

        sort(a.begin(), a.end());

        long long mx = *max_element(a.begin(), a.end());

        for (int i = 0; i < n; i++)
        {

            if (a[i] != mx)
            {
                b.push_back(a[i]);
            }
            else
                c.push_back(a[i]);
        }
        if (b.size() > 0 && c.size() > 0)
        {
            cout << b.size() << " " << c.size() << endl;
            for (auto it : b)
            {
                cout << it << " ";
            }
            cout << endl;
            for (auto it : c)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
        ;
    }

    return 0;
}