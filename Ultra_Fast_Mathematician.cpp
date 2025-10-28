#include <bits/stdc++.h>
using namespace std;

int main() {
    string x,y;
    cin>>x>>y;

    string ans = "";

    for (int i = 0; i < x.size(); i++)
    {
        if(x[i]==y[i]) ans += "0";
        else ans += "1";
    }

    cout<<ans;
    
    
    return 0;
}