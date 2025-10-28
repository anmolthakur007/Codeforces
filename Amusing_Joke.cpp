#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    string s3;
    cin >> s1 >> s2 >> s3;

    map<char, int> s1s2;
    map<char, int> for_s3;

    for (int i = 0; i < s1.size(); i++)
    {
        s1s2[s1[i]]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        s1s2[s2[i]]++;
    }
    for (int i = 0; i < s3.size(); i++)
    {
        for_s3[s3[i]]++;
    }

    bool same = true;

    if (s1s2.size() != for_s3.size())
    {
        same = false;
    }
    else
    {
        for (auto &p : s1s2)
        {
            if (for_s3[p.first] != p.second)
            {
                same = false;
                break;
            }
        }
    }

    if (same)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}