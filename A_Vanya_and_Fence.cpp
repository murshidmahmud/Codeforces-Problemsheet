#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int ans = 0;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i]<=h){
            ans +=1;
        }
        else if(a[i]>=h){
            ans +=2;
        }
    }
    cout<<ans;

    return 0;
}