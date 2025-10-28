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

        vector<long long> v;
        int place = 1;

        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                v.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }

        cout << v.size() << endl;
        for (int num : v)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}