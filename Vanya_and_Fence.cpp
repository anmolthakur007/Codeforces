#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int width = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= h)
        {
            width++;
        }
        else
        {
            if (arr[i] % h == 0)
            {
                width = width + (arr[i] / h);
            }
            else
                width = width + (arr[i] / h) + 1;
        }
    }

    cout<<width;

    return 0;
}