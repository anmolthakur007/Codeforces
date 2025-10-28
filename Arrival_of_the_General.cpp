#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int maxi = INT_MIN, mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    int left = -1;
    int right = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxi && left == -1)
            left = i;
        if (arr[i] == mini)
            right = i;
    }

    int operations;
    if (left < right)
        operations = left + (n - 1 - right);
    else
        operations = left + (n - 1 - right) - 1;

    cout << operations;
    return 0;
}
