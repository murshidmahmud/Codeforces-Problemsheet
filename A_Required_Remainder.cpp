#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        long long x,y,n;
        cin>>x >>y >>n;

        int k = 0;

        k = y+((n-y)/x*x);    //formula

        cout<<k <<endl;

    }
    return 0;
}