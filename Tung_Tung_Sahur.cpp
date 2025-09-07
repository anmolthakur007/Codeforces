#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin>>s1>>s2;
        for(int i = 0;i<s1.size();i++){
            if(s2[i]==s1[i] || s2[i+1]==s2[i]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}