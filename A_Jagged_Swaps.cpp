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

        bool changed = true;

        while (changed)
        {
            changed = false;

            for (int i = 1; i < n - 1; i++)
            {

                if (a[i - 1] < a[i] && a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                    changed = true;
                }
            }
        }

        bool sorted = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != i + 1)
            {
                sorted = false;
                break;
            }
        }

        if (sorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}