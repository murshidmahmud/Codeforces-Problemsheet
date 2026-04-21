#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long k,l,m,n,d;
    cin>>k >>l >>m >>n >>d;

    int dragon = 0;
    for(int i=1; i<=d; i++){
        if(i%k==0 || i%l==0 || i%m==0 ||i%n==0) dragon++;
    }

    cout<<dragon <<endl;
    return 0;
}