#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = n - 1;

    while (i<=j)
    {
        if (arr[i]==arr[j])
        {
           i++;
           j--;
        }
        else{
            if (arr[i]==arr[i+1])
            {
                cout<<j+1<<endl;
                break;
            }
            else{
                cout<<i+1<<endl;
                break;
            }
            
        }
        
    }
    }
    
    

    return 0;
}