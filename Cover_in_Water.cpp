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

        bool continous_3_empty = false;
        int total_empty_cells = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (i > 0 && s[i - 1] == '.' && s[i + 1] == '.' && s[i] == '.')
            {
                continous_3_empty = true;
                break;
            }
            if (s[i] == '.')
                total_empty_cells++;
        }
        if (continous_3_empty == true)
            cout << "2" << endl;
        else
            cout << total_empty_cells << endl;
    }

    return 0;
}