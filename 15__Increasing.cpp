#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        for(int j=0; j<n; j++){
            int a,a1;
            cin>>a;

            int sum=0;
            sum +=a;
            if(a1=sum/2){
                cout<<"YES" <<endl;
            }
            else{
                cout<<"NO" <<endl;
            }
        }
    }
    return 0;
}
