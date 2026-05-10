#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        string target = "abc";
        int mismatch = 0;

        for(int i=0; i<3; i++){
            if(s[i] != target[i]){
                mismatch++;
            }
        }

        if(mismatch==0 || mismatch==2){
            cout<<"YES" <<'\n';
        }
        else{
            cout<<"NO" <<'\n';
        }
    }
    return 0;
}