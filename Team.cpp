#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    vector<int> c(T, 0);

    for (int test = 0; test < T; test++) {
        int q = 0;
        for (int i = 0; i < 3; i++) {
            int x; 
            cin >> x;
            if (x == 1) q++;
        }
        c[test] = q;
    }

    int x = 0;

   
    for (int i = 0; i < T; i++) {
        if (c[i] > 1) x++;
    }

    cout << x << endl;
    return 0;
}
