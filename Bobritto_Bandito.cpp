#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int maxLeft = -l;

        int leftTaken = min(m, maxLeft);
        int lp = -leftTaken;
        int rp = m - leftTaken;

        cout << lp << " " << rp << "\n";
    }
    return 0;
}

