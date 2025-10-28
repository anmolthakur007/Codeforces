#include <bits/stdc++.h>
using namespace std;

bool isRotation(vector<int>& p, vector<int>& target) {
    int n = p.size();
    // duplicate target to handle rotations easily
    vector<int> doubled(target.begin(), target.end());
    doubled.insert(doubled.end(), target.begin(), target.end());

    // check every rotation
    for (int i = 0; i < n; i++) {
        bool ok = true;
        for (int j = 0; j < n; j++) {
            if (p[j] != doubled[i + j]) {
                ok = false;
                break;
            }
        }
        if (ok) return true;
    }
    return false;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        vector<int> inc(n), dec(n);
        for (int i = 0; i < n; i++) {
            inc[i] = i + 1;         // [1,2,...,n]
            dec[i] = n - i;         // [n,...,1]
        }

        if (isRotation(p, inc) || isRotation(p, dec)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
