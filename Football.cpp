#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int consecutive = 1;
    bool dangerous = false;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            consecutive++;
            if (consecutive >= 7) {
                dangerous = true;
                break;
            }
        } else {
            consecutive = 1;
        }
    }

    if (dangerous) cout << "YES";
    else cout << "NO";

    return 0;
}
