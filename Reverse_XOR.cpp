#include <bits/stdc++.h>
using namespace std;

// Function to reverse the binary bits of x (without leading zeros)
unsigned int reverseBits(unsigned int x)
{
    string s;
    while (x > 0)
    {
        s.push_back((x & 1) + '0');
        x >>= 1;
    }
    if (s.empty())
        s = "0";
    unsigned int rev = 0;
    for (char c : s)
    {
        rev = (rev << 1) | (c - '0');
    }
    return rev;
}

int main()
{
    // Precompute possible n = x ^ f(x)
    unordered_set<unsigned int> possible;
    for (unsigned int x = 1; x < (1u << 15); ++x)
    {
        unsigned int fx = reverseBits(x);
        possible.insert(x ^ fx);
    }

    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        cin >> n;
        cout << (possible.count(n) ? "YES\n" : "NO\n");
    }
    return 0;
}
