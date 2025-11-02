#include<bits/stdc++.h>
using namespace std;

int main(){

    long long N;
    cin>>N;

    if(N%2==0){
        long long  x= N/2;
        cout<<x;
    }
    else if(N%2!=0){
        long long y = -(N+1)/2;
        cout<<y;
    }
    return 0;
}