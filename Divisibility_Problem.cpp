#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long div = 0;

        if (a % b != 0)
        {
            div = b - (a % b);
        }
        else
            div = 0;

        cout << div << endl;
    }

    return 0;
}