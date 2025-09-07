#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string c;

    while (t--)
    {
        cin >> c;

        if (c.size() > 10)
        {
            cout << c[0] << c.size() - 2 << c[c.size() - 1] << endl;
        }
        else
            cout << c << endl;
    }

    return 0;
}