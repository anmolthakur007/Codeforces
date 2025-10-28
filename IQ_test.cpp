#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even++;
        }
        else
            odd++;
    }

    if (odd == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                cout<<i+1;
                break;
            }
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                cout<<i+1;
                break;
            }
        }
    }

    return 0;
}