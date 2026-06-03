#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a[5];
    
    for(int i=1; i<=4; i++){
        cin>>a[i];
    }

    string s;
    cin>>s;

    long long x = 0;

    for(char c:s){
        x += a[c - '0'];
    }

    cout<<x <<endl;
    return 0;
}