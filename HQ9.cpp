#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool print = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H')
            print = true;
        else if (s[i] == 'Q')
            print = true;
        else if (s[i] == '9')
            print = true;
    }

    if (print)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}