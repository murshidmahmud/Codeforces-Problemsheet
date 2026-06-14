#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int one=0, two=0;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];

            if(a[i]==1) one++;
            else two++;
        }

        int sum = one+(2*two);

        if(sum%2!=0){
            cout<<"NO" <<endl;
        }
        else if(one==0 && two%2!=0){
            cout<<"NO" <<endl;
        }
        else{
            cout<<"YES" <<endl;
        }
    }
    return 0;
}