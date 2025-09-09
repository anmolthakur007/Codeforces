#include <bits/stdc++.h>
using namespace std;

int main() {
    long x;
    cin>>x;

    int steps=0;

    while (x>0)
    {
        if(x>=5){
            x -= 5;
            steps++;
        }
        if(x==4){
            x -= 4;
            steps++;
        }
        if(x==3){
            x -= 3;
            steps++;
        }
        if(x==2){
            x -= 2;
            steps++;
        }
        if(x==1){
            x -= 1;
            steps++;
        }
    }

    cout<<steps;
    
    
    return 0;
}