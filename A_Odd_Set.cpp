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

        int even = 0, odd = 0;

        vector<int> a(n*n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];

            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }

        }
        if (even == odd)
            cout << "Yes" << endl;
        else
            cout << "No\n";
    }
    return 0;
}