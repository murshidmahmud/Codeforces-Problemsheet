#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a >>b;

        int d = abs(a-b);
        int x = (d+9)/10;


        cout<<x <<endl;
    }
    return 0;
}