#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<int> arr(n), a(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        a[arr[i] - 1] = i + 1;
    }

    for (int x : a) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
