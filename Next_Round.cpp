#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cutoff = arr[k - 1];
    int qualified = 0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] > 0 && arr[j] >= cutoff)
        {
            qualified++;
        }
    }
    cout << qualified;

    return 0;
}