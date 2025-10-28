#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        bool sum = false;

        if (a == (b + c))
        {
            sum = true;
        }
        else if (b == (a + c))
        {
            sum = true;
        }

        else if (c == (a + b))
        {
            sum = true;
        }
        if (sum)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}