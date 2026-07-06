#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        bool odd=false, even=false;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];

            if(a[i]%2) odd = true;
            else even = true;
        }
        
        if(odd && even) cout<<"YES" <<endl;
        else if (odd && n%2==1) cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    }
    return 0;
}