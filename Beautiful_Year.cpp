#include <bits/stdc++.h>
using namespace std;

bool distinct(int year) {
    string s = to_string(year);
    set<char> st(s.begin(), s.end());
    return st.size() == s.size();
}

int main() {
    int y;
    cin >> y;
    while (true) {
        y++;
        if (distinct(y)) {
            cout << y;
            break;
        }
    }
    return 0;
}
