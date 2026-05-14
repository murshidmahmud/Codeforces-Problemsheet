#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int a = s.length();

        if(a!=5){
            cout<<"NO" <<endl;
            continue;
        }

        string b = "Timur";

        sort(s.begin(), s.end());
        sort(b.begin(), b.end());
        
        if(s==b) cout<<"YES" <<endl;
        else cout<<"NO" <<endl;
    }
    return 0;
}