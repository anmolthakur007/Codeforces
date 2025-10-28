#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;

        int arr[n];
        int a[m];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>a[i];
        }
        
        int total = n + m;

        cout<<total<<endl;

        
    }
    
    
    return 0;
}