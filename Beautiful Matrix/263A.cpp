#include<bits/stdc++.h>
using namespace std;

int main(){
    int matrix[5][5];
    int ans;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];

            if(matrix[i][j] == 1){
                int ith = abs(2-i);
                int jth = abs(2-j);
                ans = ith+jth;
            }
        }
    } 

    cout<<ans;

    return 0;
}