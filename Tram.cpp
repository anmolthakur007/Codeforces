#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int total = 0;

    int a[n],b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    int x = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + b[i] - a[i];
        x = max(x,total);
    }

    cout<<x;
    

    return 0;
}