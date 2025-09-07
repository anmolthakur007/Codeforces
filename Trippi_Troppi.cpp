#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3;
        s4 = string(1, s1[0]) + string(1, s2[0]) + string(1, s3[0]);

        cout << s4 << endl;
    }

    return 0;
}