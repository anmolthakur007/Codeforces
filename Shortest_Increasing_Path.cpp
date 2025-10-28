#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        if (y % 2 != 0)
        {
            cout << -1 << endl;
        }
        else if (x % 2 != 0 && y % 2 == 0 && (y > x) > 0)
        {
            cout << 2 << endl;
        }
        else if (x % 2 == 0 && y % 2 == 0 && x > y)
        {
            cout << 3 << endl;
        }
        else if (x % 2 == 0 && y % 2 == 0 && x < y)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}