#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int mini = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            int curr = arr[i + 1] - arr[i];
            mini = min(mini, curr);
        }

        if (mini >= 0)
            cout << (mini / 2) + 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}