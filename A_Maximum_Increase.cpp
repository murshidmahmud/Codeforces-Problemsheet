#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int current = 1;
    int max = 1;

    for(int i=1; i<n; i++){
        if(a[i] > a[i-1]){
            current++;
        }
        else{
            current = 1;
        }
        if(current>max) max = current;
    }

    cout<<max <<endl;
    
    return 0;
}