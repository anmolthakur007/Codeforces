#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int bills = 0;

    if (n/100 > 0)
    {
        bills += n/100;
        int x = n/100;
        n -= x*100;
    }
    if (n/20 > 0)
    {
        bills += n/20;
        int x = n/20;
        n -= x*20;
    }
    if (n/10 > 0)
    {
        bills += n/10;
        int x = n/10;
        n -= x*10;
    }
    if (n/5 > 0)
    {
        bills += n/5;
        int x = n/5;
        n -= x*5;
    }
    if (n/1 > 0)
    {
        bills += n/1;
        int x = n/1;
        n -= x*1;
    }

    cout<<bills;
    
    
    
    return 0;
}