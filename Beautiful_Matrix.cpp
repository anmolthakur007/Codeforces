#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];

    int total_operations = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                int row_operation = abs(2 - i);
                int column_operation = abs(2 - j);

                total_operations = row_operation + column_operation;

                cout << total_operations;

                return 0;
            }
        }
    }

    return 0;
}