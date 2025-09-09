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
        string s;
        cin >> s;
        int operations=0;

        int i = 0, j = n-1;
        while (i < j)
        {
            while (i < j && s[i] == '0')
            {
                i++;
            }
            while (i < j && s[j] == '1')
            {
                j--;
            }
            if (i < j)
            {
                swap(s[i], s[j]);
                i++;
                j--;
                operations++;
            }
        }
        cout << operations << endl;
    }

    return 0;
}