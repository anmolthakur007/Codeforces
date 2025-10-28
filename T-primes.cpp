#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;

    cin>>n;

    int maxi = INT_MIN;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
       cin>>v[i]; 
    }

    unordered_map<long long,int>mpp;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < maxi; j++)
        {
            if (v[i]%j==0)
            {
                mpp[v[i]]++;
            }
        }
        
    }

    for (auto it:mpp)
    {
        if (it.second==3)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    
    
    
    return 0;
}