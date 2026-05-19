#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin>>t;

    
    for(int i=1; i<=t; i++){
        int a, b, c;
        cin>>a >>b >>c;

        if(a+b==c || b+c==a || c+a==b){
            cout<<"YES" <<endl;
        }
        else
            cout<<"NO" <<'\n';

            return 0;

    }

}