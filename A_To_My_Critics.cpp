#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;

    int a,b,c;

    while(t--){
        cin>>a >>b >>c;

        int x = a+b;
        int y = a+c;
        int z = b+c;

        if(x>=10){
            cout<<"YES \n";
        }
        else if(y>=10){
            cout<<"YES \n";
        }
        else if(z>=10){
            cout<<"YES \n";
        }
        else{
            cout<<"NO \n";
        }
    }
    return 0;
}