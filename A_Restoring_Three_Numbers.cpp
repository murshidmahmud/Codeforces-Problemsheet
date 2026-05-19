#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<long long> a(4);

    for(int i=0; i<4; i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    long long a1 = a[3]- a[2];
    long long b = a[3]- a[1];
    long long c = a[3]- a[0];

    cout<< a1 <<" " <<b <<" " <<c <<endl;


    return 0;
}