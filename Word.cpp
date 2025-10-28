#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int lower = 0;
    int upper = 0;

    for (char q : s)
    {
        if (q >= 65 && q <= 90)
        {
            upper++;
        }
        else{
            lower++;
        }
    }

    if (upper > lower)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }

    cout << s;

    return 0;
}