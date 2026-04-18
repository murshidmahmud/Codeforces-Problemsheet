#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long k,n,w;
    cin>>k >>n >>w;

    int total = k*(w*(w+1)/2);

    //cout<<total;
    
    if(total<=n){
        cout<< 0;
    }
    else if(total>n) 
    cout<<total-n <<endl;
    return 0;
}