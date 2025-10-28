#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w;
    cin>>k>>n>>w;
    
    int borrow = 0;
    int cost = 0;

    for (int i = 1; i <= w; i++)
    {
        cost = cost + i*k;
    }
    
    borrow = cost - n;

    if(borrow<=0){
        cout<<"0";
    }
    else cout<<borrow;
    
    return 0;
}