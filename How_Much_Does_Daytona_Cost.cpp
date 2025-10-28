#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--)
    {
        long long n,k;
        cin>>n>>k;

        long long arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (arr[i]==k)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
           cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
        
        
    }
    
    
    return 0;
}