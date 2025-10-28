#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p = 0, q = 0;
    int space = 0;

    int rooms = 0;

    while (n--)
    {
        cin >> p >> q;
        space = q - p;
        if (space >= 2)
        {
            rooms++;
        }
    }

    cout << rooms;

    return 0;
}