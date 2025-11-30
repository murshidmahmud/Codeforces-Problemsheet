#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;

    while(t--){
        int x1,x2,x3;
        cin>> x1 >>x2 >>x3;

        int arr[3] = {x1,x2,x3};
        sort(arr, arr+3);

        int X = arr[2]-arr[0];
        cout<<X <<endl;
    }
    return 0;
}