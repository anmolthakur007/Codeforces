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

        long long arr[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        int total = 0;

        for (int i = 0; i < n - 1; i++)
        {
            total += arr[i];
        }
        cout << -(total) << endl;
    }

    return 0;
}