#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        int a,b,c,n;
        cin>>a >>b >>c >>n;

        int mx = max({a,b,c});
        int need = (mx-a)+(mx-b)+(mx-c);

        if(need>n) cout<<"NO" <<endl;
        else if((n-need)%3==0) cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    }
    return 0;
}