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

        bool ok = true;

        int oddParity = a[0] % 2;

        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % 2 != oddParity)
                ok = false;
        }

        int evenParity = (n > 1 ? a[1] % 2 : 0);

        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % 2 != evenParity)
                ok = false;
        }

        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}