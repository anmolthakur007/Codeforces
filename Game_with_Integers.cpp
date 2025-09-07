#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int remainder = n % 3;

        if((remainder+1)%3 ==0 || (remainder-1)%3 ==0){
            cout<<"First"<<endl;
        }
        else cout<<"Second"<<endl;
    }
    
    
    return 0;
}