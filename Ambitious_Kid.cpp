#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long arr[n];

    long long mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, abs(arr[i]));
    }

    cout << mini;

    return 0;
}