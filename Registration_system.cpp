#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> name_count;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if (name_count[s] == 0)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << name_count[s] << endl;
        }

        name_count[s]++;
    }

    return 0;
}
