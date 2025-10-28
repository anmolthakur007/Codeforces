#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    double total = 0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        total += arr[i];
    }

    double x = total/n;

    cout<<x;
    
    
    return 0;
}