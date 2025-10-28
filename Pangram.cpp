#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    unordered_set<char> ust;

    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        ust.insert(s[i]);
    }
    
    if (ust.size()==26)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    
    return 0;
}