#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = 1, maxCount = 1;

    for (int i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        maxCount = max(maxCount, count);
    }

    cout << maxCount;

    return 0;
}
