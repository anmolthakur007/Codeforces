#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> count(5, 0); // Index 1 to 4

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        count[x]++;
    }

    int taxis = 0;

    // Groups of 4 each need their own taxi
    taxis += count[4];

    // Groups of 3 can be paired with groups of 1
    int min_1_3 = min(count[3], count[1]);
    taxis += count[3];
    count[1] -= min_1_3;

    // Pairs of groups of 2
    taxis += count[2] / 2;
    count[2] = count[2] % 2;

    // If one group of 2 remains, try to fit with up to 2 ones
    if (count[2] == 1)
    {
        taxis++;
        count[1] -= min(2, count[1]);
    }

    // Remaining ones can go 4 per taxi
    if (count[1] > 0)
    {
        taxis += (count[1] + 3) / 4; // ceiling
    }

        cout << taxis << endl;

    return 0;
}
