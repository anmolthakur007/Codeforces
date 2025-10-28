#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int x, y;
    cin >> x;

    unordered_set<int> st;
    for (int i = 0; i < x; i++)
    {
        int q;
        cin >> q;
        st.insert(q);
    }


    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int q;
        cin >> q;
        st.insert(q);
    }

    if (st.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}