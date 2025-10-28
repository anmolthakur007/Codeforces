#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int maxi = 0;
        vector<vector<int>> arr(n);

        // read all arrays
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            arr[i].resize(k);
            for (int j = 0; j < k; ++j)
            {
                cin >> arr[i][j];
            }
        }

        // find max size
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, (int)arr[i].size());
        }

        // find last row with max size
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            if ((int)arr[i].size() == maxi)
            {
                pos = i;
            }
        }

        // fill last row from pos row
        for (int i = (int)arr[n-1].size(); i < maxi; i++)
        {
            arr[n-1].push_back(arr[pos][i]);
        }

        // print last row
        for (int i = 0; i < (int)arr[n-1].size(); i++)
        {
            cout << arr[n-1][i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
