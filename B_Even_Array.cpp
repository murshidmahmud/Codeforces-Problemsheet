#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int e = 0;
        int o = 0;

        for (int i = 0; i < n; i++)
        {
            if (i%2 == 0 && a[i]%2 != 0)
            {
                e++;
            }
            else if (i%2 != 0 && a[i]%2 == 0)
            {
                o++;
            }
        }

        if(e!=o) cout<< -1 <<endl;
        else cout<< e <<endl;

    }
    return 0;
}