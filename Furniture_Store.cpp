#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int min_so_far = INT_MAX;
        vector<int> bad;

        for (int i = 0; i < n; i++) {
            if (a[i] > min_so_far) {
                bad.push_back(i + 1); // store 1-based index
            }
            min_so_far = min(min_so_far, a[i]);
        }

        cout << bad.size() << "\n";
        for (int x : bad) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
