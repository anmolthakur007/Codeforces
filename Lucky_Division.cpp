#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int lucky[] = {4, 7, 44, 47, 74, 77,
                   444, 447, 474, 477,
                   744, 747, 774, 777};
    int size = sizeof(lucky) / sizeof(lucky[0]);

    for (int i = 0; i < size; i++)
    {
        if (n % lucky[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
