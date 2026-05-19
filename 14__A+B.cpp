#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    //cin>>a >>s >>b;

    for(int i=1; i<=t; i++){
        int a,b;
        char s;
        cin>>a >>s >>b;

        if(s=='+'){
            int sum = a+b;
            cout<<sum <<endl;
        }
    }
    return 0;
}