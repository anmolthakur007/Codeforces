#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        bool found = false;

        string x, s;
        cin >> x >> s;
        

        string x0 = x;
        string x1 = x0 + x0;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;

        int ans = -1;

        if(x0.find(s) != string::npos) ans = 0;
        else if(x1.find(s) != string::npos) ans = 1;
        else if(x2.find(s) != string::npos) ans = 2;
        else if(x3.find(s) != string::npos) ans = 3;
        else if(x4.find(s) != string::npos) ans = 4;
        else if(x5.find(s) != string::npos) ans = 5;

        cout<<ans<<endl;
        
    }

    return 0;
}