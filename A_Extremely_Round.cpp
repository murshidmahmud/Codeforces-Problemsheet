#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        int digit = to_string(n).length();

        int first = n;
        while (first >= 10)
        {
            first /= 10;
        }

        int answer = 9 * (digit - 1) + first;
        cout << answer << endl;
    }

    return 0;
}