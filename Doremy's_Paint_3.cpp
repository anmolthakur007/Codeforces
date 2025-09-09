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
        long long arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<long long, long long> frequency_map;

        for (int i = 0; i < n; i++)
        {
            frequency_map[arr[i]]++;
        }

        if (frequency_map.size() >= 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            long long frq_1 = frequency_map.begin()->second;
            long long frq_2 = frequency_map.rbegin()->second;
            if (frq_1 == frq_2)
                cout << "YES" << endl;
            else if (abs(frq_1 - frq_2) == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}