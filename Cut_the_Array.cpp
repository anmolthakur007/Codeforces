#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> prefix_sum(n + 1, 0); // prefix_sum[i] = sum of first i elements

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            prefix_sum[i + 1] = prefix_sum[i] + a[i];
        }

        bool found = false;

        for (int l = 1; l < n - 1 && !found; ++l) {
            for (int r = l + 1; r < n && !found; ++r) {
                int sum1 = prefix_sum[l] % 3;
                int sum2 = (prefix_sum[r] - prefix_sum[l]) % 3;
                int sum3 = (prefix_sum[n] - prefix_sum[r]) % 3;

                // Normalize negative modulo values
                if (sum1 < 0) sum1 += 3;
                if (sum2 < 0) sum2 += 3;
                if (sum3 < 0) sum3 += 3;

                if ((sum1 == sum2 && sum2 == sum3) ||
                    (sum1 != sum2 && sum2 != sum3 && sum1 != sum3)) {
                    cout << l << " " << r << endl;
                    found = true;
                }
            }
        }

        if (!found) {
            cout << "0 0" << endl;
        }
    }

    return 0;
}
