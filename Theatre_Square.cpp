#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
 
    long long area_ts = n * m;
    long long area_fs = a * a;
 
    long long tiles_along_n = (n + a - 1) / a;
    long long tiles_along_m = (m + a - 1) / a;
    long long total_tiles = tiles_along_n * tiles_along_m;
    cout << total_tiles << "\n";
 
    return 0;
}