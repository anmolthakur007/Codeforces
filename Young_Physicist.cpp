#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    int mat[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
        }
    }
    
    
    int sum_x = 0;
    int sum_y = 0;
    int sum_z = 0;
    
    for(int i=0;i<n;i++){
        sum_x += mat[i][0];
    }
    for(int i=0;i<n;i++){
        sum_y += mat[i][0];
    }
    for(int i=0;i<n;i++){
        sum_z += mat[i][0];
    }
    int equi = sum_x+sum_y+sum_z;
    
    if(equi==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}