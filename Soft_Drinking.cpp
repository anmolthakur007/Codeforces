#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int vol = k * l;
    int q = vol / nl;

    int lime = c * d;

    int salt = p / np;

    cout << (min({q, lime, salt}) / n) << endl;

    return 0;
}