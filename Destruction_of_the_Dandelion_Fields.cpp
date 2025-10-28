#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<long long> odd;
        vector<long long> even;
        long long total = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
                odd.push_back(arr[i]);
            else
                even.push_back(arr[i]);
        }

        sort(odd.begin(),odd.end(),greater<long long>());
        sort(even.begin(),even.end(),greater<long long>());
        
        if (odd.size()==0)
        {
            total = 0;
        }
        else if (odd.size()==1)
        {
            for (int i = 0; i < even.size(); i++)
            {
                total += even[i];
            }
            total += odd[0];
        }
        else if(odd.size()>1)
        {
            for (int i = 0; i < (odd.size()+1)/2; i++)
            {
                total += odd[i];
            }
            for (int i = 0; i < even.size(); i++)
            {
                total += even[i];
            }
        }
        
        cout<<total<<endl;
        

    }
        

        return 0;
    }