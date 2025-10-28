#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    sort(a.rbegin(), a.rend());
    int taken = 0, sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        taken++;
        if (sum > total - sum)
        {
            cout << taken << '\n';
            return 0;
        }
    }
    cout << taken << '\n';
    return 0;
}
