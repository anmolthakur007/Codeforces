#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int M,N;
    cin>>M>>N;

    int area = M*N;

    int domnio = 2*1;

    if(area%2==0){
        cout<<area/domnio;
    }
    else cout<<(area-1)/domnio;

    return 0;
}