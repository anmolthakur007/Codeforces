#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int count = 0;

    while (n > 0)
    {
        int last_digit = n % 10;
        if (last_digit == 4 || last_digit == 7)
        {
            count++;
        }
        n /= 10;
    }

    if(count == 7 || count == 4) cout<<"YES";
    else cout<<"NO";

    return 0;
}