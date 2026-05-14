#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int y,w;
    cin>>y >>w;

    int mx = max(y,w);

    int favorable = 7-mx;
    int total = 6;

    int g = __gcd(favorable,total);

    cout<<favorable/g <<"/" <<total/g;
    return 0;
}