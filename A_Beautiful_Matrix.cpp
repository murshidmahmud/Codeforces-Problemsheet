#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int A[5][5],r,c;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>A[i][j];
            if(A[i][j]==1){
                r=i;
                c=j;
            }
        }
    }
    int moves = abs(r-2)+abs(c-2);
    cout<<moves <<endl;
    return 0;
}