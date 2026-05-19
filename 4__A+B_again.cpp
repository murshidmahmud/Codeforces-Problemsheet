#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;

        int x = n%10;
        int y = (n/10)%10;

        int sum = x+y;
        cout<<sum <<endl;
    }
    return 0;
}